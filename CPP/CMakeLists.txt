cmake_minimum_required (VERSION 3.14)
project(CPP)

include(GNUInstallDirs)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)

set(CPP_LINK_LIBRARIES
)

set(CPP_RAZSTAVA_HEADERS
	projects/razstavaNizov/src/Razstava.h
)
set(CPP_RAZSTAVA_SOURCES
	projects/razstavaNizov/src/Razstava.cpp
)

set(CPP_HEADERS
	${CPP_RAZSTAVA_HEADERS}
	src/utils.h
	src/Commander.h
)
set(CPP_SOURCES
	${CPP_RAZSTAVA_SOURCES}
	src/utils.cpp
	src/Commander.cpp
)

set(CPP_EXECUTABLE_HEADERS
  ${CPP_HEADERS}
)
set(CPP_EXECUTABLE_SOURCES
  ${CPP_SOURCES}
  src/main.cpp
)
set(CPP_EXECUTABLE_LINK_LIBRARIES
  ${CPP_LINK_LIBRARIES}
)

add_executable(CPP ${CPP_EXECUTABLE_HEADERS} ${CPP_EXECUTABLE_SOURCES})
target_link_libraries(CPP ${CPP_EXECUTABLE_LINK_LIBRARIES})
