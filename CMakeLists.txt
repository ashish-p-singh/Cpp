cmake_minimum_required(VERSION 4.2)
project(cpplion)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC_FILES *.cpp)

foreach(file ${SRC_FILES})
    get_filename_component(exec_name ${file} NAME_WE)
    add_executable(${exec_name} ${file}
            tle.cpp
            tle.cpp
            hi.cpp
    )
endforeach()