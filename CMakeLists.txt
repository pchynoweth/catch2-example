cmake_minimum_required(VERSION 3.10)

# set the project name
project(Demo)

enable_testing()

# specify the C++ standard
set(CMAKE_CXX_STANDARD 23)

# add the library
add_library(demo SHARED src/demo.cpp)

# specify where the public headers of this library are
target_include_directories(demo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# add compiler flags for generating coverage data
if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(demo PRIVATE --coverage)
    target_link_libraries(demo PRIVATE --coverage)
endif()

add_subdirectory(tests)
