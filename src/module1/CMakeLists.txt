cmake_minimum_required(VERSION 3.0.0)

SET(MODULE1_SOURCES
    module1.c    
)

add_library(module1 ${MODULE1_SOURCES})

target_include_directories(module1 PUBLIC include)