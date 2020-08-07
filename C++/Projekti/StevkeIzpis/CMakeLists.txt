cmake_minimum_required (VERSION 3.12)
project(CPPStevkeIzpis)

include(GNUInstallDirs)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)

set(CPP_HEADERS
  src/Utils.h
)
set(CPP_SOURCES
  src/Utils.cpp
)

set(CPP_EXECUTABLE_HEADERS
  ${CPP_HEADERS}
)
set(CPP_EXECUTABLE_SOURCES
  ${CPP_SOURCES}
  src/main.cpp
)

add_executable(CPPStevkeIzpis ${CPP_EXECUTABLE_HEADERS} ${CPP_EXECUTABLE_SOURCES})
