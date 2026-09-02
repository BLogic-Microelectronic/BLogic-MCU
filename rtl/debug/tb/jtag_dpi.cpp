// ============================================
// Ostim BLogic Mikroelektronik
// jtag_dpi.cpp  -  SimJTAG icin DPI-C koprusu: OpenOCD remote_bitbang sunucusu
// ============================================
// deneme/jtag dali (JTAG_DENEME_PLANI.md, Gun 2). SimJTAG.sv
// (rtl/debug/vendor/riscv-dbg/tb) her TICK_DELAY cevrimde `jtag_tick` DPI
// fonksiyonunu cagirir; bu dosya o fonksiyonu C baglantisiyla (extern "C")
// saglar ve TCP 'PORT' uzerinde OpenOCD remote_bitbang protokolunu konusur.
//
// Izlenen yol (neden .cpp, neden vendor .c dogrudan verilmedi):
//   - Verilator komut satirindaki .c dosyalarini da g++ ile derler; vendor
//     remote_bitbang.c / sim_jtag.c dogrudan verilirse jtag_tick C++ isim
//     bozmasina ugrar ve DPI baglantisi "undefined reference" ile kalir.
//     Bu yuzden vendor remote_bitbang.c burada extern "C" blogu icinde
//     #include edilir: soket kurulumu (rbs_init), protokol cozucu
//     (rbs_execute_command: '0'-'7' pin yazma, 'R' TDO okuma, 'Q' cikis,
//     'r'/'s' TRST birak, 't'/'u' TRST uygula, 'B'/'b' yok sayilir) ve
//     pin/durum globalleri (tck, tms, tdi, trstn, tdo, quit, client_fd)
//     AYNEN vendor kodudur; vendor dosyasina dokunulmaz.
//   - vendor sim_jtag.c ALINMAZ: onun jtag_tick'i rbs_tick -> rbs_accept /
//     rbs_execute_command uzerinden istemci baglanana kadar ve her komut
//     bayti gelene kadar mesgul-bekler (busy-wait). O halde simulasyon
//     OpenOCD bosta iken donar: firmware ilerlemez, UART/watchdog anlamini
//     yitirir, CPU %100 doner. Buradaki jtag_tick ayni DPI imzasiyla
//     non-blocking calisir: accept() EAGAIN donerse istemci yoktur,
//     recv(MSG_PEEK|MSG_DONTWAIT) bayt yok derse pinler son degerde kalir ve
//     simulasyon ilerler. Istemci 'Q' gondermeden koparsa (recv 0) soket
//     kapatilir ve yeni baglanti kabul edilir (OpenOCD yeniden baslatilabilir).
//
// Donus degeri (vendor sim_jtag.c ile ayni): 0 devam; 'Q' sonrasi
// (rbs_err << 1) | 1 -> SimJTAG `exit` portu sifirdan farkli olur, TB
// "[JTAG-OPENOCD] SimJTAG exit=%0d" basip $finish yapar.
//
// Sistem basliklari extern "C" blogundan ONCE, dosya kapsaminda alinir:
// g++ altinda <stdlib.h>/<string.h> C++ sarmalayicilarina gider ve bunlar
// extern "C" icinde acilirsa "template with C linkage" hatasi verir. Vendor
// .c icindeki ayni #include satirlari include guard sayesinde bos gecer.

#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "svdpi.h"

// Sertlestirme: vendor rbs_init soketi INADDR_ANY'ye (0.0.0.0) baglar, yani
// makinenin tum arayuzlerinden erisilebilir olurdu. Vendor dosyasina
// dokunmadan yalniz LOOPBACK'e baglamak icin makro burada, include'dan hemen
// once yeniden tanimlanir (sistem basliklari yukarida cozuldugu icin yalniz
// vendor metnini etkiler). OpenOCD zaten localhost:9999'a baglanir.
#undef INADDR_ANY
#define INADDR_ANY htonl(INADDR_LOOPBACK)

extern "C" {
#include "../vendor/riscv-dbg/tb/remote_bitbang/remote_bitbang.c"
}
#undef INADDR_ANY

// rbs_init yalniz ilk tick'te bir kez cagrilir (vendor sim_jtag.c gibi)
static int s_rbs_ready = 0;

// Non-blocking accept: istemci yoksa hemen doner (vendor rbs_accept'in
// mesgul-bekleyen dongusunun yerine).
static void jtag_try_accept(void)
{
    int fd = accept(socket_fd, NULL, NULL);
    if (fd == -1) {
        if (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR) return;
        fprintf(stderr, "remote_bitbang accept failed: %s (%d)\n",
                strerror(errno), errno);
        abort();
    }
    fcntl(fd, F_SETFL, O_NONBLOCK);
    client_fd = fd;
    fprintf(stderr, "remote_bitbang: istemci baglandi (fd=%d)\n", fd);
}

// SimJTAG.sv:
//   import "DPI-C" function int jtag_tick(input int port,
//       output bit jtag_TCK, output bit jtag_TMS, output bit jtag_TDI,
//       output bit jtag_TRSTn, input bit jtag_TDO);
extern "C" int jtag_tick(int port, svBit *jtag_TCK, svBit *jtag_TMS,
                         svBit *jtag_TDI, svBit *jtag_TRSTn, svBit jtag_TDO)
{
    if (!s_rbs_ready) {
        if (port < 0 || port > UINT16_MAX)
            fprintf(stderr, "remote_bitbang: port araligi disi: %d\n", port);
        s_rbs_ready = rbs_init((uint16_t)port);
    }

    if (client_fd > 0) {
        // 'R' komutu bu tick'te gorulen TDO'yu yanitlar (vendor rbs_tick gibi)
        tdo = jtag_TDO;
        char    peek;
        ssize_t n = recv(client_fd, &peek, 1, MSG_PEEK | MSG_DONTWAIT);
        if (n > 0) {
            rbs_execute_command();      // bayti tuketir, pinleri/yaniti isler
        } else if (n == 0) {
            fprintf(stderr, "remote_bitbang: istemci ayrildi, yeni baglanti bekleniyor\n");
            close(client_fd);
            client_fd = 0;
        } else if (errno != EAGAIN && errno != EWOULDBLOCK && errno != EINTR) {
            fprintf(stderr, "remote_bitbang recv failed: %s (%d)\n",
                    strerror(errno), errno);
            abort();
        }
    } else if (!quit) {
        jtag_try_accept();
    }

    *jtag_TCK   = tck;
    *jtag_TMS   = tms;
    *jtag_TDI   = tdi;
    *jtag_TRSTn = trstn;

    return rbs_done() ? ((rbs_exit_code() << 1) | 1) : 0;
}
