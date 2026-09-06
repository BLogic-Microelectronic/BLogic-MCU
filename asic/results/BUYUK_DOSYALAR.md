# Large-file packaging (GitHub 100 MB limit)

The files below were larger than 95 MB, so they were compressed
with gzip -9; where necessary they were split into 90 MB parts. The
original SHA-256 values are in the .sha256 files next to them. To restore:

    cat <name>.gz.part* | gunzip > <name>     # if split
    gunzip -k <name>.gz                       # if a single part

Verification: sha256sum -c <name>.sha256

- `reports/power/net-VGND.csv` -> `reports/power/net-VGND.csv.gz`; original SHA-256: `reports/power/net-VGND.csv.sha256`
- `reports/power/net-VPWR.csv` -> `reports/power/net-VPWR.csv.gz`; original SHA-256: `reports/power/net-VPWR.csv.sha256`
- `results/def/asic_top.def` -> `results/def/asic_top.def.gz`; original SHA-256: `results/def/asic_top.def.sha256`
- `results/gds/asic_top.gds` -> `results/gds/asic_top.gds.gz`; original SHA-256: `results/gds/asic_top.gds.sha256`
- `results/gds/asic_top_klayout.gds` -> `results/gds/asic_top_klayout.gds.gz`; original SHA-256: `results/gds/asic_top_klayout.gds.sha256`
- `results/gds/asic_top_magic.gds` -> `results/gds/asic_top_magic.gds.gz`; original SHA-256: `results/gds/asic_top_magic.gds.sha256`
- `results/mag/asic_top.mag` -> `results/mag/asic_top.mag.gz`; original SHA-256: `results/mag/asic_top.mag.sha256`
- `results/netlist/asic_top_pnr.v` -> `results/netlist/asic_top_pnr.v.gz`; original SHA-256: `results/netlist/asic_top_pnr.v.sha256`
- `results/netlist/asic_top_powered.v` -> `results/netlist/asic_top_powered.v.gz`; original SHA-256: `results/netlist/asic_top_powered.v.sha256`
- `results/odb/asic_top.odb` -> gzip + split (2 parts); original SHA-256: `results/odb/asic_top.odb.sha256`
- `results/spef/max/asic_top.max.spef` -> `results/spef/max/asic_top.max.spef.gz`; original SHA-256: `results/spef/max/asic_top.max.spef.sha256`
- `results/spef/min/asic_top.min.spef` -> `results/spef/min/asic_top.min.spef.gz`; original SHA-256: `results/spef/min/asic_top.min.spef.sha256`
- `results/spef/nom/asic_top.nom.spef` -> `results/spef/nom/asic_top.nom.spef.gz`; original SHA-256: `results/spef/nom/asic_top.nom.spef.sha256`
- `results/spice/asic_top.spice` -> `results/spice/asic_top.spice.gz`; original SHA-256: `results/spice/asic_top.spice.sha256`
