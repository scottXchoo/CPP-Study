project(HW1)

include_directories(${CMAKE_SOURCE_DIR}/HW1/config)
        include_directories(${CMAKE_SOURCE_DIR}/HW1/include)

        add_executable(HW1_exe
        ${CMAKE_SOURCE_DIR}/HW1/config/car_config.h
        ${CMAKE_SOURCE_DIR}/HW1/include/car.h
        ${CMAKE_SOURCE_DIR}/HW1/include/person.h
        ${CMAKE_SOURCE_DIR}/HW1/include/utils.h
        ${CMAKE_SOURCE_DIR}/HW1/src/car.cpp
        ${CMAKE_SOURCE_DIR}/HW1/src/person.cpp
        ${CMAKE_SOURCE_DIR}/HW1/src/utils.cpp

        ${CMAKE_SOURCE_DIR}/HW1/main.cpp
)