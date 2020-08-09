cmake_minimum_required (VERSION 3.12)
project(CrkeVNizu)

include(GNUInstallDirs)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)

set(CRKE_HEADERS
  src/Utils.h
)
set(CRKE_SOURCES
  src/Utils.cpp
)

set(CRKE_EXECUTABLE_HEADERS
  ${CRKE_HEADERS}
)
set(CRKE_EXECUTABLE_SOURCES
  ${CRKE_SOURCES}
  src/main.cpp
)

add_executable(CrkeVNizu ${CRKE_EXECUTABLE_HEADERS} ${CRKE_EXECUTABLE_SOURCES})
