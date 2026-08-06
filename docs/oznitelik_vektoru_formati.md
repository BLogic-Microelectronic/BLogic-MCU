# Öznitelik Vektörü Formatı (K13)

Hızlandırıcının beklediği giriş verisinin kesin tanımı. **B11 host betiği bu
dönüşümü yapmak zorundadır**; yapılmazsa çıkarım sessizce yanlış sınıf üretir.

## Özet

| Alan | Değer |
|---|---|
| Uzunluk | **1960 bayt** = 490 word (32-bit) |
| Şekil | 49 zaman adımı × 40 frekans bölmesi, **satır-öncelikli** (zaman dış, frekans iç) |
| Eleman tipi | **int8, işaretli** (-128 … 127) |
| Zero-point | **-128** (`ai_accelerator.sv:72` → `INPUT_ZP = -8'sd128`) |
| Word paketleme | **little-endian**: bayt 0 = word'ün LSB'si |
| Hedef adres | AI SRAM `0x0003_0000` (INPUT bölgesi, ofset 0) |

## Kritik dönüşüm: uint8 → int8

TFLite Micro'nun `audio_microfrontend` frontend'i **uint8 (0…255)** üretir.
Model ise **int8** bekler. Aradaki kaydırma host tarafında yapılmalıdır:

```python
int8_value = uint8_value - 128        # esdeger: byte ^ 0x80
```

İkiye tümleyende bu, en anlamlı bitin ters çevrilmesiyle aynı şeydir.

**Doğrulama:** `golden_vectors/input_yes_real.hex` içeriği bu dönüşümden
geçmiş haldedir — aralık -128…118, baytların %64,2'si negatif. Ham uint8
gönderilirse örneğin 200 değeri +72 yerine -56 olarak yorumlanır ve conv
katmanının tüm MAC birikimi kayar.

## MCU tarafı dönüşüm yapmaz

`sw/tests/ai_uart_load_test.c` protokolü **ham bayt** taşır ve gelen baytı
olduğu gibi AI SRAM'e yazar (`dst[i] = (uint8_t)b`). Bu bilinçlidir: jüri
hangi ölçeklemeyi verirse versin firmware değişmeden çalışır. Dönüşümün
sorumluluğu host betiğindedir.

## Jüri ham uint8 verirse

İki seçenek:
1. **Host betiğinde çevir** (tercih edilen) — tek satır, firmware'e dokunmaz.
2. Firmware'de çevir — `dst[i] = (uint8_t)(b ^ 0x80u);` tek karakterlik
   değişiklik, ama o zaman int8 veri gelirse bozar. Bayrakla korunmalı.

Jüriden gelen verinin hangi konvansiyonda olduğu sahada **ilk vektörle**
anlaşılır: int8 ise negatif değerler ~%60 civarındadır, uint8 ise hiç negatif
görünmez (tüm baytlar 0…255 aralığında ve ortalama ~128'dir).

## Bölge haritası (AI SRAM 0x0003_0000)

| Bölge | Ofset | Boyut |
|---|---|---|
| INPUT | 0x0000 | 1.960 B ← bu belge |
| CONV_OUT (scratch) | 0x07A8 | 4.000 B |
| CONV_W | 0x17A8 | 640 B |
| CONV_BIAS | 0x1BA8 | 32 B |
| FC_W | 0x1BC8 | 16.000 B |
| FC_BIAS | 0x5A48 | 16 B |
| RESULT | 0x5A58 | 4 B |

Kaynak: `rtl/ai_accelerator/ai_accelerator.sv:89-93`
