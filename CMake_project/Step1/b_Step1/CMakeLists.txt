# TODO1: Set the minimum required version of CMake to be 3.23
cmake_minimum_required(VERSION 3.23)

# TODO2: Create a project named Tutorial
project(Tutorial)

# TODO3: Add an executable target called Tutorial to the project
add_executable(Tutorial)

# TODO4: Add the Tutorial/Tutorial.cxx source file to the Tutorial target
target_sources(Tutorial
    PRIVATE
        src/Tutorial.cxx
)

# TODO7: Add the MathFunctions library as a linked dependency
#        to the Tutorial target
target_link_libraries(Tutorial
    PRIVATE
        MathFunctions
)

# TODO5: Add a library target called MathFunctions to the project
add_library(MathFunctions)

# TODO6: Add the source and header file located in Step1/MathFunctions to the
#        MathFunctions target, note that the intended way to include the
#        MathFunctions header is:
#          #include <MathFunctions.h>
target_sources(MathFunctions
    PRIVATE
        lib/MathFunctions.cxx
    
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include
        FILES
            include/MathFunctions.h
      
)
