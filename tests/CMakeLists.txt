find_package(Catch2 3 REQUIRED)

add_executable(tests test_demo.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain demo)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
catch_discover_tests(tests)
