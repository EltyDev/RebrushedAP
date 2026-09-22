cmake_minimum_required(VERSION 3.10)
project(RebrushedAP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(version SHARED
    ${CMAKE_SOURCE_DIR}/src/entrypoint.cpp
    ${CMAKE_SOURCE_DIR}/src/console.cpp
    ${CMAKE_SOURCE_DIR}/src/proxy.cpp
    ${CMAKE_SOURCE_DIR}/src/rebrushed/rebrushed_ap.cpp
    ${CMAKE_SOURCE_DIR}/src/utils/hook.cpp
    ${CMAKE_SOURCE_DIR}/version.def
)

target_include_directories(version PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(version
    Shlwapi.lib
)

set_target_properties(version PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)