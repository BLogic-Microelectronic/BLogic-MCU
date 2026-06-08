import os
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = ROOT / "src"
LINKER_DIR = ROOT / ".." / "user_files"
CONFIG_FILE = ROOT / ".." / "user_files" / "rv_toolchain.conf"
BUILD_DIR = ROOT / "build"

PROJECT_NAME = "helloworld"

C_SOURCES = [
    SRC_DIR / "helloworld.c",
]

ASM_SOURCES = [
    SRC_DIR / "crt0.S",
]

INCLUDE_DIRS = [
    SRC_DIR,
    ROOT / ".." / "user_files"
]

LINKER_SCRIPT = LINKER_DIR / "bootrom.ld"

ARCH_FLAGS = [
    "-march=rv32imc",
    "-mabi=ilp32",
    "-mcmodel=medlow",
]

COMMON_CFLAGS = [
    "-Os",
    "-ffreestanding",
    "-fno-builtin",
    "-Wall",
    "-Wextra",
]

ASM_FLAGS = [
    "-x", "assembler-with-cpp",
]

LINK_FLAGS = [
    "-nostartfiles",
    "-nostdlib",
]


def load_local_config():
    namespace = {}
    if CONFIG_FILE.exists():
        code = CONFIG_FILE.read_text(encoding="utf-8")
        exec(code, namespace)
    return namespace


def which_or_none(exe_name):
    return shutil.which(exe_name)


def resolve_toolchain_prefix():
    env_prefix = os.environ.get("RISCV_GCC_PREFIX")
    if env_prefix:
        return env_prefix

    cfg = load_local_config()
    cfg_prefix = cfg.get("RISCV_GCC_PREFIX")
    if cfg_prefix:
        return cfg_prefix

    gcc_path = which_or_none("riscv32-unknown-elf-gcc")
    if gcc_path:
        gcc_path = Path(gcc_path).resolve()
        return str(gcc_path.parent / "riscv32-unknown-elf")

    raise RuntimeError(
        "RISC-V toolchain not found.\n"
        "Please do one of these:\n"
        "1. Add riscv32-unknown-elf-gcc to PATH\n"
        "2. Set RISCV_GCC_PREFIX environment variable\n"
        "3. Edit config/local_config.py"
    )


def resolve_executable(prefix, suffix):
    candidates = [
        f"{prefix}-{suffix}",
        f"{prefix}-{suffix}.exe",
    ]

    for candidate in candidates:
        if shutil.which(candidate):
            return candidate
        if Path(candidate).exists():
            return str(Path(candidate))

    raise RuntimeError(
        f"Could not find tool for suffix '{suffix}'. Tried:\n  " +
        "\n  ".join(candidates)
    )


def check_tools(prefix):
    tools = {
        "gcc": resolve_executable(prefix, "gcc"),
        "objcopy": resolve_executable(prefix, "objcopy"),
        "objdump": resolve_executable(prefix, "objdump"),
        "readelf": resolve_executable(prefix, "readelf"),
        "size": resolve_executable(prefix, "size"),
    }
    return tools

def make_include_flags(include_dirs):
    flags = []
    for inc in include_dirs:
        flags += ["-I", str(inc)]
    return flags

def compile_source(gcc, source_file, output_file, extra_flags=None):
    cmd = [gcc] + ARCH_FLAGS + COMMON_CFLAGS + make_include_flags(INCLUDE_DIRS)
    if extra_flags:
        cmd += extra_flags
    cmd += ["-c", str(source_file), "-o", str(output_file)]
    run(cmd)

def link_objects(gcc, object_files, elf_file, map_file):
    cmd = [gcc] + ARCH_FLAGS + LINK_FLAGS
    cmd += [str(obj) for obj in object_files]
    cmd += [
        f"-Wl,-T,{LINKER_SCRIPT}",
        f"-Wl,-Map={map_file}",
        "-o", str(elf_file),
    ]
    run(cmd)

def run(cmd, cwd=None):
    printable = " ".join(f'"{c}"' if " " in c else c for c in cmd)
    print(f">> {printable}")
    subprocess.check_call(cmd, cwd=cwd)


def main():
    prefix = resolve_toolchain_prefix()
    tools = check_tools(prefix)

    gcc = tools["gcc"]
    objcopy = tools["objcopy"]
    objdump = tools["objdump"]
    readelf = tools["readelf"]
    size = tools["size"]

    BUILD_DIR.mkdir(parents=True, exist_ok=True)

    object_files = []

    for c_src in C_SOURCES:
        obj = BUILD_DIR / (c_src.stem + ".o")
        compile_source(gcc, c_src, obj)
        object_files.append(obj)

    for asm_src in ASM_SOURCES:
        obj = BUILD_DIR / (asm_src.stem + ".o")
        compile_source(gcc, asm_src, obj, ASM_FLAGS)
        object_files.append(obj)

    elf_file = BUILD_DIR / f"{PROJECT_NAME}.elf"
    map_file = BUILD_DIR / f"{PROJECT_NAME}.map"
    dis_file = BUILD_DIR / f"{PROJECT_NAME}.dis"
    readelf_file = BUILD_DIR / f"{PROJECT_NAME}.readelf"
    mem_file = BUILD_DIR / f"{PROJECT_NAME}.mem"

    link_objects(gcc, object_files, elf_file, map_file)

    with dis_file.open("w", encoding="utf-8") as f:
        subprocess.check_call([objdump, "-d", str(elf_file)], stdout=f)

    with readelf_file.open("w", encoding="utf-8") as f:
        subprocess.check_call([readelf, "-a", str(elf_file)], stdout=f)

    run([size, str(elf_file)])

    run([
        sys.executable,
        str(ROOT / "scripts" / "elf_to_mem.py"),
        "--elf", str(elf_file),
        "--out", str(mem_file),
        "--objcopy", objcopy,
    ])

    print()
    print("Build completed successfully.")
    print(f"ELF     : {elf_file}")
    print(f"MAP     : {map_file}")
    print(f"DISASM  : {dis_file}")
    print(f"READELF : {readelf_file}")
    print(f"MEM     : {mem_file}")


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        print(f"\nERROR: Command failed with exit code {exc.returncode}")
        sys.exit(exc.returncode)
    except Exception as exc:
        print(f"\nERROR: {exc}")
        sys.exit(1)