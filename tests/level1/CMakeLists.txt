add_executable(level1)

target_sources(level1 PRIVATE
    reverse_string.cpp
    version.cpp
    int_holder.cpp
    profile.cpp
)

target_link_libraries(level1
    PRIVATE
        gtest_main
    PUBLIC
        tt
)

gtest_discover_tests(level1)