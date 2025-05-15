add_library(somelib STATIC bruh.cpp) # could use SHARED instead for dynamic libraries for runtime linking

target_include_directories(somelib
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR})

# Can use instead of INTERFACE the keywords: PRIVATE or PUBLIC