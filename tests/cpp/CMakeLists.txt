link_libraries(opendb
        zutil 
        zlib 
        tm
        defin
        defout
        lefout
        lefin
        tcl
)
include_directories(${PROJECT_SOURCE_DIR}/include/opendb)
add_executable( test1 ${PROJECT_SOURCE_DIR}/tests/cpp/test.cpp )
