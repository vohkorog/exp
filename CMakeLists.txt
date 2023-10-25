cmake_minimum_required(VERSION 3.10.0)
project(opengl-test)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

set(FILES )

file(GLOB FILES 
    "src/*.cpp"
    "src/*.h"
    "dep/GLAD/src/glad.c"
)

add_executable(${PROJECT_NAME}  ${FILES})

include_directories(dep/GLAD/include)

target_link_libraries(${PROJECT_NAME} glfw) 



