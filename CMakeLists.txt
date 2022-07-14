cmake_minimum_required(VERSION 3.0.0)

SET(TARGET_GROUP production CACHE STRING "What Should I Build?")  
# Modules that exist in both our release and our unit tests, are added now
add_subdirectory(src)

if(TARGET_GROUP STREQUAL release) 
    # If we had any files that ONLY were compiled into our release, for example startup code,   
    # it's really handy to put it here.
    add_executable(app main.c)

    target_link_libraries(app module1)

elseif(TARGET_GROUP STREQUAL test) 
    # Our tests need to let CTest know we're running tests    
    include(CTest)    
    include(GoogleTest)

    add_subdirectory(googletest)
    add_subdirectory(test)
else()    
    message(FATAL_ERROR "I don't know the TARGET_GROUP you gave me!") 
endif()

