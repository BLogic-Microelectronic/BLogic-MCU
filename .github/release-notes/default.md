Release files:

- `asic-results-<tag>.tar.gz`: outputs of the signed-off sky130 run (GDS, ODB, Magic database, DEF,
  SDF, SPEF, SPICE and netlists). Unpack in the repository root or run `bash asic/fetch_results.sh <tag>`.
- `asic_top-<tag>.gds.gz`: the final GDS on its own.
- `SHA256SUMS`: checksums of the files above.

Simulation image: `docker run --rm ghcr.io/blogic-microelectronic/blogic-mcu:<tag>`.
