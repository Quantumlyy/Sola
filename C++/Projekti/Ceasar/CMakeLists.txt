cmake_minimum_required (VERSION 3.12)
project(Ceasar)

include(GNUInstallDirs)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)

set(CEASAR_HEADERS
  src/Utils.h
)
set(CEASAR_SOURCES
  src/Utils.cpp
)

set(CEASAR_EXECUTABLE_HEADERS
  ${CEASAR_HEADERS}
)
set(CEASAR_EXECUTABLE_SOURCES
  ${CEASAR_SOURCES}
  src/main.cpp
)

add_executable(Ceasar ${CEASAR_EXECUTABLE_HEADERS} ${CEASAR_EXECUTABLE_SOURCES})
