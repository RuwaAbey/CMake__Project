# Subdirectories

 ```cmake 
 add_subdirectory(SubdirectoryName)
 ```
Command allows us to incorporate CMLs located in subdirectories of the project.

When a CMakeLists.txt in a subdirectory is being processed by CMake all relative paths described in the subdirectory CML are relative to that subdirectory, not the top-level CML.

### TODO1: Set the minimum required version of CMake to be 3.23
 ```cmake
cmake_minimum_required(VERSION 3.23)
 ```

### TODO2: Create a project named Tutorial
 ```cmake
project(Tutorial)
 ```

### TODO3:Move all the Tutorial target commands to this CMakeLists.txt. 
Ensure that all paths are updated to be relative to this new location.
 ```cmake
add_executable(Tutorial)

target_sources(Tutorial
    PRIVATE
        Tutorial.cxx   
)

target_link_libraries(Tutorial
    PRIVATE
        MathFunctions
)
 ```

### TODO4:Add the Tutorial subdirectory to the project
 ```cmake
add_subdirectory(Tutorial)
 ```

### TODO5: Move all the MathFunctions target commands to this CMakeLists.txt.
Ensure that all paths are updated to be relative to this new location.
 ```cmake
add_library(MathFunctions)

target_sources(MathFunctions
    PRIVATE
        MathFunctions.cxx

    PUBLIC
        FILE_SET HEADERS
        FILES
            MathFunctions.h
)
 ```

### TODO6: Add the MathFunctions subdirectory to the project
 ```cmake
add_subdirectory(MathFunctions)
 ```