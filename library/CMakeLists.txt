cmake_minimum_required(VERSION 2.8)

project( tele )

set(SOURCES_
    cpu_device.cpp
    gpu_compute_device.cpp 
    gpu_media_device.cpp 
    platform_memory.cpp 
 )

set(HEADERS_
    cpu_device.h
    gpu_compute_device.h 
    gpu_media_device.h 
    platform_memory.h 
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

add_library(tele SHARED ${SOURCES_} ${HEADERS_})

#MESSAGE( STATUS "variable is: " ${SOURCES_} )

set_target_properties(tele PROPERTIES LINKER_LANGUAGE CXX)
