cmake_minimum_required(VERSION 3.28)
project(CPP_Study)

set(CMAKE_CXX_STANDARD 14)

include_directories("HW#1/config")
include_directories("HW#1/include")
include_directories("HW#1/src")

add_executable(CPP_Study
        "HW#1/config/car_config.h"
        "HW#1/include/car.h"
        "HW#1/include/person.h"
        "HW#1/include/utils.h"
        "HW#1/src/car.cpp"
        "HW#1/src/main.cpp"
        "HW#1/src/person.cpp"
        "HW#1/src/utils.cpp")
