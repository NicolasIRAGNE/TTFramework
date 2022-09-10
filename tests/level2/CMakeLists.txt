add_executable(level2)

target_sources(level2 PRIVATE
    int_holder.cpp
)

target_link_libraries(level2
    PRIVATE
        gtest_main
    PUBLIC
        tt
)

gtest_discover_tests(level2)