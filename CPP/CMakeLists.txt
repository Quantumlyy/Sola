cmake_minimum_required (VERSION 3.14)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

set(CPP_LINK_LIBRARIES
)

if(NOT WIN32)
    set(CPP_LINK_LIBRARIES
      ${CPP_LINK_LIBRARIES}
      m
    )
endif()

set(CPP_RAZSTAVA_HEADERS
	projects/razstavaNizov/src/razstava.h
)
set(CPP_RAZSTAVA_SOURCES
	projects/razstavaNizov/src/razstava.cpp
)

set(CPP_HEADERS
	${CPP_RAZSTAVA_HEADERS}
)
set(CPP_SOURCES
	${CPP_RAZSTAVA_SOURCES}
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
