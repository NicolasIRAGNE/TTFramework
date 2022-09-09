add_library(tt STATIC)

set(TT_SOURCES
    thread_pool.cpp
)

set(TT_HEADERS
    thread_pool.h
)

target_compile_features(tt PUBLIC cxx_std_20)
target_sources(tt PRIVATE ${TT_SOURCES} ${TT_HEADERS})
target_include_directories(tt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
