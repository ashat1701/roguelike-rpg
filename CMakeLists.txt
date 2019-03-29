cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

add_definitions(-Wall -std=c++0x -D HOME)
SET(PROJECT_BINARY_DIR build)
SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/bin
        CACHE PATH
        "Single Directory for all"
    )
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/bin
        CACHE PATH
        "Single Directory for all"
    )

SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/lib
        CACHE PATH
        "Single Directory for all"
    )

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

include_directories("./src/")
enable_testing()

add_subdirectory(src build/src)

add_subdirectory(tests build/tests)
