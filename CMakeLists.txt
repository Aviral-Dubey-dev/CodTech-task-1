
cmake_minimum_required(VERSION 3.10)  # works on older distros too
project(FileOps C)

# Enforce a standard, keep things portable.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Library: all the file operation implementations (no main).
add_library(file_ops
    src/createFile.c
    src/writeFile.c
    src/appendFile.c
    src/readFile.c
)

# Make headers visible to anything linking to file_ops.
target_include_directories(file_ops PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Executable with your menu-driven main().
add_executable(file_ops_cli
    src/main.c
)

# Link the executable against the library.
target_link_libraries(file_ops_cli PRIVATE file_ops)

# (Optional but recommended) Warnings for GCC/Clang; MSVC gets its own flags.
if (CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(file_ops PRIVATE -Wall -Wextra -pedantic)
    target_compile_options(file_ops_cli PRIVATE -Wall -Wextra -pedantic)
elseif (MSVC)
    target_compile_options(file_ops PRIVATE /W4)
    target_compile_options(file_ops_cli PRIVATE /W4)
endif()
