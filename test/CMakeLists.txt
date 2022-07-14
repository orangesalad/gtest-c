cmake_minimum_required(VERSION 3.0.0)
enable_testing()

add_executable(test_all test_all.cc test_module1.cc)

target_link_libraries(test_all module1 gtest)

add_test(all_tests test_all)