cmake_minimum_required( VERSION 3.28 )

set (PROJECT_NAME "c-tempalte-struct")

Project(${PROJECT_NAME})

file (GLOB SOURCES
        code/app/main.c
        code/dummy/*.c
    )

file (GLOB HEADERS
        code/dummy/*.h
        code/c_template_struct.h
    )

set (INCLUDE_DIRS
    "code/dummy"
    "code/")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} )
set_target_properties(${PROJECT_NAME} PROPERTIES C_STANDARD 23)

#arrange VS IDE filter tree to match working directory
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIRS})
source_group("Header Files\\dummy" FILES code/dummy/dummy.h)
source_group("Source Files\\dummy" FILES code/dummy/dummy.c)