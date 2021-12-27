add_library(tt STATIC)

set(TT_SOURCES
    sqrt.c
)

set(TT_HEADERS
    sqrt.h
)

target_sources(tt PRIVATE ${TT_SOURCES} ${TT_HEADERS})
target_include_directories(tt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
