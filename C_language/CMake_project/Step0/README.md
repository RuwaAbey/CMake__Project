```cmake
cmake_minimum_required(VERSION <min>[...<policy_max>] [FATAL_ERROR])
```
This specifies the minimum CMake version required to configure the project

```cmake
cmake_minimum_required(VERSION 3.23)
```

```cmake
project(<PROJECT-NAME> [<language-name>...])
project(<PROJECT-NAME>
        [VERSION <major>[.<minor>[.<patch>[.<tweak>]]]]
        [COMPAT_VERSION <major>[.<minor>[.<patch>[.<tweak>]]]]
        [SPDX_LICENSE <license-string>]
        [DESCRIPTION <description-string>]
        [HOMEPAGE_URL <url-string>]
        [LANGUAGES <language-name>...])
```

Defines the project name and initializes important variables

```cmake
project(Tutorial)
```

```cmake
add_executable(<name> <options>... <sources>...)
```

Add an executable target called <name> to be built from the source files listed in the command invocation.

```cmake
add_executable(hello)
```

```cmake
target_sources(<target>
  <INTERFACE|PUBLIC|PRIVATE> [items1...]
  [<INTERFACE|PUBLIC|PRIVATE> [items2...] ...])
```

<target> : must have been created by a command such as add_executable() or add_library() or add_custom_target()

The INTERFACE, PUBLIC and PRIVATE keywords are required to specify the scope of the source file paths (<items>) that follow them. 

PRIVATE: Only this target uses the source

```cmake
target_sources(hello
  PRIVATE
    HelloWorld.cxx
)
```
```text
Tutorial/
├── CMakeLists.txt
└── HelloWorld.cxx
```

##Build and Run

In the directory the cpp and cmakelists.txt exists invoke the following commands

```cmake
cmake -B build
```

-B flag: tells CMake to use the given relative path as the location to generate files and store artifacts during the build process.
If it is omitted, the current working directory is used. It is generally considered bad practice to do "in-source" builds, placing these generated files in the source tree itself.

```text
-- The C compiler identification is GNU 13.3.0
-- The CXX compiler identification is GNU 13.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/ruwa/Documents/Project_Folder/CMake/cmake_project/Step0/build
```

Folder structure will be as above
```text
├── build/
│   ├── CMakeCache.txt
│   ├── CMakeFiles/
│   ├── cmake_install.cmake
│   └── Makefile
├── CMakeLists.txt
└── HelloWorld.cxx
```

```cmake
cmake --build build
```
The executable will be created inside the build directory as hello

```bash
./hello
```

