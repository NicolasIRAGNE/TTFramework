include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/955c7f837efad184ec63e771c42542d37545eaef.zip
)

FetchContent_MakeAvailable(googletest)

set(TESTS 
    tests_sqrt.cpp
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GTEST ON)
set(BUILD_GMOCK OFF)

add_executable(tests)
target_sources(tests PRIVATE ${TESTS})
target_link_libraries(tests gtest_main tt)

include(CTest)
include(GoogleTest)

gtest_discover_tests(tests)