
cmake_minimum_required(VERSION 3.0.0)

set(FOO_PROJECT_NAME
    Foo
)
set(FOO_SOURCE_DIR
    src
)
set(FOO_SOURCE
    ${FOO_SOURCE_DIR}/main.cpp
    ${FOO_SOURCE_DIR}/time.cpp
)
set(FOO_LIBRARIES_DIR
    libs
)
set(FOO_LIBRARIES 
    A
    B
)

project(${FOO_PROJECT_NAME})

#########
# GTest #
#########
enable_testing()
add_subdirectory(libs/gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

###########
# Project #
###########
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(${FOO_PROJECT_NAME} ${FOO_SOURCE})
foreach(LIBRARY ${FOO_LIBRARIES})
    add_subdirectory("${FOO_LIBRARIES_DIR}/${LIBRARY}")
endforeach(LIBRARY)
target_link_libraries(${FOO_PROJECT_NAME} ${FOO_LIBRARIES})
message(STATUS "INCLUDE_DIRS: ${PROJECT_SOURCE_DIR}/include")