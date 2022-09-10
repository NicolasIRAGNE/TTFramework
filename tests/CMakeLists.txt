include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/955c7f837efad184ec63e771c42542d37545eaef.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(CTest)
include(GoogleTest)

set(BUILD_GTEST ON)
set(BUILD_GMOCK OFF)

add_subdirectory(level1)
add_subdirectory(level2)
add_subdirectory(level4)




