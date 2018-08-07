cmake_minimum_required(VERSION 2.8)

project( telemetry )

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

add_executable( telemetry telemetry.cpp )

set_target_properties(telemetry PROPERTIES LINKER_LANGUAGE CXX)
