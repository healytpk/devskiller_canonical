cmake_minimum_required(VERSION 3.10)

project(program)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}" ${CMAKE_MODULE_PATH})

find_package(CURL   REQUIRED)
find_package(JSON-C REQUIRED)

add_executable(program
    ../main.cpp
)

target_include_directories(program
    PRIVATE
    ../
    ${CURL_INCLUDE_DIRS}
    ${JSON-C_INCLUDE_DIRS}
)

target_link_libraries(program
    PRIVATE
    ${CURL_LIBRARIES}
    ${JSON-C_LIBRARIES}
)

target_compile_definitions(program PRIVATE JSON_STATIC)
