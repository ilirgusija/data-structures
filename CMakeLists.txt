cmake_minimum_required(VERSION 3.0.0)
project(data-structures VERSION 0.1.0)

include(CTest)
enable_testing()

# add_subdirectory(linked_lists)
add_executable(data-structures main.cpp linked_lists/linked_list.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
