add_library(tt STATIC)

set(TT_SOURCES
    level1/int_holder.cpp
    level1/misc.cpp
    level1/version.cpp

    level2/int_holder.cpp

    level4/thread_pool.cpp
)

set(TT_HEADERS
    level1.h
    level2.h
    level4.h
)

target_compile_features(tt PUBLIC cxx_std_20)
target_sources(tt PRIVATE ${TT_SOURCES} ${TT_HEADERS})
target_include_directories(tt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
