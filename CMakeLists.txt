cmake_minimum_required(VERSION 3.10)

project(MyProject)

add_library(MathLib
    src/math.cpp
)

target_include_directories(MathLib
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(MyProject
    src/main.cpp
)

target_link_libraries(MyProject
    PRIVATE MathLib
)

enable_testing()

add_executable(MathTest
    tests/test_math.cpp
)

target_link_libraries(MathTest
    PRIVATE MathLib
)

add_test(
    NAME MathTest
    COMMAND MathTest
)
