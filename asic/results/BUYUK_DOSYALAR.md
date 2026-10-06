> v1.0 itibariyla asagidaki results/ dosyalari repoda tutulmuyor; v1.0 release'ine
> ekli. `bash asic/fetch_results.sh` onlari ayni yollara indirir ve SHA-256 ile
> dogrular. Teslim edilen hal (dosyalar dahil): `teknofest-final` etiketi.

# Buyuk dosya paketlemesi (GitHub 100 MB limiti)

Asagidaki dosyalar 95 MB uzerinde oldugu icin gzip -9 ile
sikistirildi; gerekenler 90 MB parcalara bolundu. Orijinal SHA-256
degerleri yanlarindaki .sha256 dosyalarindadir. Geri elde etmek icin:

    cat <ad>.gz.part* | gunzip > <ad>     # parcalanmissa
    gunzip -k <ad>.gz                     # tek parcaysa

Dogrulama: sha256sum -c <ad>.sha256

- `reports/power/net-VGND.csv` -> `reports/power/net-VGND.csv.gz`; orijinal SHA-256: `reports/power/net-VGND.csv.sha256`
- `reports/power/net-VPWR.csv` -> `reports/power/net-VPWR.csv.gz`; orijinal SHA-256: `reports/power/net-VPWR.csv.sha256`
- `results/def/asic_top.def` -> `results/def/asic_top.def.gz`; orijinal SHA-256: `results/def/asic_top.def.sha256`
- `results/gds/asic_top.gds` -> `results/gds/asic_top.gds.gz`; orijinal SHA-256: `results/gds/asic_top.gds.sha256`
- `results/gds/asic_top_klayout.gds` -> `results/gds/asic_top_klayout.gds.gz`; orijinal SHA-256: `results/gds/asic_top_klayout.gds.sha256`
- `results/gds/asic_top_magic.gds` -> `results/gds/asic_top_magic.gds.gz`; orijinal SHA-256: `results/gds/asic_top_magic.gds.sha256`
- `results/mag/asic_top.mag` -> `results/mag/asic_top.mag.gz`; orijinal SHA-256: `results/mag/asic_top.mag.sha256`
- `results/netlist/asic_top_pnr.v` -> `results/netlist/asic_top_pnr.v.gz`; orijinal SHA-256: `results/netlist/asic_top_pnr.v.sha256`
- `results/netlist/asic_top_powered.v` -> `results/netlist/asic_top_powered.v.gz`; orijinal SHA-256: `results/netlist/asic_top_powered.v.sha256`
- `results/odb/asic_top.odb` -> gzip + split (2 parca); orijinal SHA-256: `results/odb/asic_top.odb.sha256`
- `results/spef/max/asic_top.max.spef` -> `results/spef/max/asic_top.max.spef.gz`; orijinal SHA-256: `results/spef/max/asic_top.max.spef.sha256`
- `results/spef/min/asic_top.min.spef` -> `results/spef/min/asic_top.min.spef.gz`; orijinal SHA-256: `results/spef/min/asic_top.min.spef.sha256`
- `results/spef/nom/asic_top.nom.spef` -> `results/spef/nom/asic_top.nom.spef.gz`; orijinal SHA-256: `results/spef/nom/asic_top.nom.spef.sha256`
- `results/spice/asic_top.spice` -> `results/spice/asic_top.spice.gz`; orijinal SHA-256: `results/spice/asic_top.spice.sha256`
