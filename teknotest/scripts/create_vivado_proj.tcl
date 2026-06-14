create_project -force teknotest vivado_proj -part xc7k325tffg900-2

add_files ./tb/teknotest_tb.sv -fileset sim_1

source ./user_files/compile_user_design.tcl

set_property include_dirs [file normalize "./user_files/"] [list [get_filesets sources_1] [get_filesets sim_1]]

update_compile_order -fileset sources_1
update_compile_order -fileset sim_1

add_files ./sw/build/helloworld.mem