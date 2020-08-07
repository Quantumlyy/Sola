cmake_minimum_required (VERSION 3.12)
project(CPPCrkeVNizu)

include(GNUInstallDirs)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)

set(CPP_CRKE_HEADERS
  src/Utils.h
)
set(CPP_CRKE_SOURCES
  src/Utils.cpp
)

set(CPP_CRKE_EXECUTABLE_HEADERS
  ${CPP_CRKE_HEADERS}
)
set(CPP_CRKE_EXECUTABLE_SOURCES
  ${CPP_CRKE_SOURCES}
  src/main.cpp
)

add_executable(CPPCrkeVNizu ${CPP_CRKE_EXECUTABLE_HEADERS} ${CPP_CRKE_EXECUTABLE_SOURCES})
