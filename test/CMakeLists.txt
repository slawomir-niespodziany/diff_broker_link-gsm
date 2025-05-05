include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/releases/download/v1.17.0/googletest-1.17.0.tar.gz
        DOWNLOAD_EXTRACT_TIMESTAMP ON)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

# test_link_gsm
add_executable(test_link_gsm TestLinkGsm.cpp)

set_property(TARGET test_link_gsm PROPERTY CXX_STANDARD 17)
set_property(TARGET test_link_gsm PROPERTY CXX_STANDARD_REQUIRED ON)

target_link_libraries(test_link_gsm diff::diff GTest::gtest_main link_gsm)

gtest_discover_tests(test_link_gsm)
