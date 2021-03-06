cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(CPPPrimer_answers LANGUAGES C CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

message(STATUS "*** CMAKE_BUILD_TYPE: " ${CMAKE_BUILD_TYPE})

message(STATUS "*** CMAKE_C_FLAGS_DEBUG: " ${CMAKE_C_FLAGS_DEBUG})
message(STATUS "*** CMAKE_C_FLAGS_RELEASE: " ${CMAKE_C_FLAGS_RELEASE})
message(STATUS "*** CMAKE_CXX_FLAGS_DEBUG: " ${CMAKE_CXX_FLAGS_DEBUG})
message(STATUS "*** CMAKE_CXX_FLAGS_RELEASE: " ${CMAKE_CXX_FLAGS_RELEASE})

set(CXXFLAGS
  -g
  -Wall
  -Wextra
)
string(REPLACE ";" " " CXXFLAGS "${CXXFLAGS}")
string(APPEND CMAKE_CXX_FLAGS " ")
string(APPEND CMAKE_CXX_FLAGS ${CXXFLAGS})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS FALSE)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory(Chapter01)
add_subdirectory(Chapter02)
add_subdirectory(Chapter03)
add_subdirectory(Chapter04)
add_subdirectory(Chapter06)
add_subdirectory(Chapter09)
add_subdirectory(Chapter10)
add_subdirectory(Chapter11)
add_subdirectory(Chapter12)
add_subdirectory(Chapter13)
add_subdirectory(Chapter14)
add_subdirectory(Chapter15)
add_subdirectory(Chapter16)
add_subdirectory(Chapter17)
add_subdirectory(Chapter19)

install(FILES README.md DESTINATION doc COMPONENT document RENAME "README.md")
