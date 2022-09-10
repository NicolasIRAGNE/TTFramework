add_executable(level4)

target_sources(level4 PRIVATE
    thread_pool.cpp
)

target_link_libraries(level4
    PRIVATE
        gtest_main
    PUBLIC
        tt
)

gtest_discover_tests(level4)