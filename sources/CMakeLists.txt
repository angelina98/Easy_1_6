set(SOURCES
        Fib.h
        Fib.cpp)
add_library(Fib ${SOURCES})
target_include_directories(Fib PUBLIC ${SRC_ROOT_DIR})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})
add_subdirectory(tests)