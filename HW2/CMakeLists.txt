project(HW2)

include_directories(${CMAKE_SOURCE_DIR}/HW2/config)
include_directories(${CMAKE_SOURCE_DIR}/HW2/include)

add_executable(HW2_exe
	${CMAKE_SOURCE_DIR}/HW2/config/config.h
	${CMAKE_SOURCE_DIR}/HW2/include/Document.h
	${CMAKE_SOURCE_DIR}/HW2/include/Library.h
	${CMAKE_SOURCE_DIR}/HW2/include/utils.h
	${CMAKE_SOURCE_DIR}/HW2/src/Document.cpp
	${CMAKE_SOURCE_DIR}/HW2/src/Library.cpp
	${CMAKE_SOURCE_DIR}/HW2/src/utils.cpp

	${CMAKE_SOURCE_DIR}/HW2/main.cpp
	include/utils.h
)
