# TODO12: Move all the MathFunctions target commands to this CMakeLists.txt.
#         Ensure that all paths are updated to be relative to this new location.
add_library(MathFunctions)

target_sources(MathFunctions
    PRIVATE
        MathFunctions.cxx

    PUBLIC
        FILE_SET HEADERS
        FILES
            MathFunctions.h
)