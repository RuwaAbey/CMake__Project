# Linking Together Libraries and Executables

```cmake
target_link_libraries(MyProgram
  PRIVATE
    MyLibrary
)
```
### Scope keywords

```cmake PRIVATE``` : Property is only available to the target which owns it
    eg: ```cmake PRIVATE``` headers only be visible to the target they are attached

```cmake INTERFACE``` :Property is only available to targets which link the owning target.
    eg: A header-only library is an example of a collection of INTERFACE properties

 ```cmake PUBLIC ```: Property available to both the owning target and consuming targets. (union of PRIVATE and INTERFACE)

 ```cmake
target_sources(MyLibrary
  PRIVATE
    FILE_SET internalOnlyHeaders
    TYPE HEADERS
    FILES
      InternalOnlyHeader.h

  INTERFACE
    FILE_SET consumerOnlyHeaders
    TYPE HEADERS
    FILES
      ConsumerOnlyHeader.h

  PUBLIC
    FILE_SET publicHeaders
    TYPE HEADERS
    FILES
      PublicHeader.h
)
```


### TODO1: Set the minimum required version of CMake to be 3.23
 ```cmake
cmake_minimum_required(VERSION 3.23)
 ```

### TODO2: Create a project named Tutorial
 ```cmake
project(Tutorial)
 ```

### TODO3: Add an executable target called Tutorial to the project
 ```cmake
add_executable(Tutorial)
 ```

### TODO4: Add the Tutorial/Tutorial.cxx source file to the Tutorial target
 ```cmake
target_sources(Tutorial
    PRIVATE
        src/Tutorial.cxx
)
 ```

### TODO7: Add the MathFunctions library as a linked dependency to the Tutorial target
 ```cmake
target_link_libraries(Tutorial
    PRIVATE
        MathFunctions
)
 ```

### TODO5: Add a library target called MathFunctions to the project
 ```cmake
add_library(MathFunctions)
 ```

### TODO6: Add the source and header file located in Step1/MathFunctions to the MathFunctions target, note that the intended way to include the
MathFunctions header is:
    #include <MathFunctions.h>

### TODO5: Add a library target called MathFunctions to the project
 ```cmake
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
 ```

















