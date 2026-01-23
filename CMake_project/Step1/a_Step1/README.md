# Building a library

```cmake
add_library(MyLibrary)
```

Header files are described slightly differently than implementation files.

```cmake
target_sources(MyLibrary
  PRIVATE
    library_implementation.cxx

  PUBLIC
    FILE_SET myHeaders
    TYPE HEADERS
    BASE_DIRS
      include
    FILES
      include/library_header.h
)
```

```cmake FILE_SET <name>```: describe a collection of header files, This is a handle which we can use to describe the collection in other contexts.

```cmake TYPE <type>```: kind of files we are describing

```cmake BASE_DIRS``` : "base" locations for the files

```camke FILES ```: list of files

Shortcut: if the ```cmake FILE_SET ```
 name is the same as the type, we don't need to provide the TYPE field.

```cmake
target_sources(MyLibrary
  PRIVATE
    library_implementation.cxx

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
      include
    FILES
      include/library_header.h
)
```

### TODO1: Set the minimum required version of CMake to be 3.23
```cmake
cmake_minimum_required(VERSION 3.23)
```

### TODO2: Create a project named Tutorial
```cmake
project(Tutotrial)
```

### TODO3 Add a library target called MathFunctions to the project
```cmake
add_library(MathFunctions)
```

### TODO4 Add the source and header file located in Step1/MathFunctions to the
MathFunctions target, note that the intended way to include the MathFunctions header is:
       #include <MathFunctions.h>

```cmake
target_sources(MathFunctions
    PRIVATE
        src/MathFunctions.cxx

    PUBLIC
        FILE_SET myHeaders
        TYPE HEADERS
        BASE_DIRS
           include
        FILES
            include/MathFunctions.h
)
```

# Build the library

```cmake
cmake -B build
```

```cmake
cmake --build build
```