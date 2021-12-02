project(Google_tests)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(Google_Tests_run tests.cpp ../Student.cpp ../StudentAfterFirstSession.cpp ../StudentAfterSecondSession.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)