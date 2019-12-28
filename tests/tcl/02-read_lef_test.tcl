set tcl_dir [file dirname [file normalize [info script]]]
set tests_dir [file dirname $tcl_dir]
set data_dir [file join $tests_dir "data"]
source [file join $tcl_dir "test_helpers.tcl"]

set db [dbDatabase_create]
set lib [odb_read_lef $db $data_dir/gscl45nm.lef]
if {$lib == "NULL"} {
    puts "Failed to read LEF file"
    exit 1
}
exit 0