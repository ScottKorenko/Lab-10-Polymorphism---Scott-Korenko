cmake_minimum_required(VERSION 3.16.3)
project(Polymorhism LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 14)
# this mandatory command will be the one that will make your cross-compiling work
set(CMAKE_SYSTEM_NAME Linux)

#Necessary for shared library on Windows
if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(code SHARED)
target_include_directories(code PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("code")

add_library(catch2 SHARED)
target_include_directories(catch2 PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("include")

add_executable(Polymorhism)
target_sources(Polymorhism PRIVATE "main.cpp")
target_link_libraries(Polymorhism PRIVATE code)

add_executable(circle)
target_sources(circle PRIVATE "tests/circleTest.cpp")
target_link_libraries(circle PRIVATE code catch2)

add_executable(negative)
target_sources(negative PRIVATE "tests/negativeTest.cpp")
target_link_libraries(negative PRIVATE code catch2)

add_executable(sphere)
target_sources(sphere PRIVATE "tests/sphereTest.cpp")
target_link_libraries(sphere PRIVATE code catch2)

add_executable(rectangle)
target_sources(rectangle PRIVATE "tests/rectangleTest.cpp")
target_link_libraries(rectangle PRIVATE code catch2)

##Extra Credit portion, uncomment the next commented lines
# add_executable(square)
# target_sources(square PRIVATE "tests/squareTest.cpp")
# target_link_libraries(square PRIVATE code catch2)

# add_executable(cube)
# target_sources(cube PRIVATE "tests/cubeTest.cpp")
# target_link_libraries(cube PRIVATE code catch2)