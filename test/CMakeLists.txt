add_subdirectory(googletest EXCLUDE_FROM_ALL)

include(include)

set(test_src
    test_main.cpp
    graph_test.cpp
)

add_executable(RecipesTest ${test_src})

target_include_directories(RecipesTest
  PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/code
    ${CMAKE_SOURCE_DIR}/test/googletest/googlemock/include
    ${CMAKE_SOURCE_DIR}/test/googletest/googletest/include
)

target_link_libraries(RecipesTest gtest_main gmock_main)

add_test(NAME RecipesTest COMMAND RecipesTest)

