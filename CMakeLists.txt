cmake_minimum_required(VERSION 3.0.0)

SET(TARGET_GROUP production CACHE STRING "Define TARGET_GROUP")  

add_subdirectory(src)

if(TARGET_GROUP STREQUAL release) 

    add_executable(app main.c)
    target_link_libraries(app module1)

elseif(TARGET_GROUP STREQUAL test) 
    include(CTest)    
    include(GoogleTest)

    add_subdirectory(googletest)
    add_subdirectory(test)
else()    
    message(FATAL_ERROR "Unknown TARGET_GROUP") 
endif()

