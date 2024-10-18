
cmake_minimum_required(VERSION 3.10)

project(tic-tac)


set(CMAKE_C_STANDARD 99)

set(SRC
    src/tictactoe.c
)
set(INCLUDE 
    include/tictactoe.h
)
add_library(core
    ${SRC}
    ${CORE_SRC}
)

add_executable(tic-tac
    src/main.c
)


target_link_libraries(tic-tac PRIVATE core)

set_target_properties(tic-tac PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
)