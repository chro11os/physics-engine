cmake_minimum_required(VERSION 3.28)
project(physics_engine)

set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(${PROJECT_NAME}
        main.cpp
)

# Add your custom include dir (headers)
target_include_directories(${PROJECT_NAME} PRIVATE
        ${PROJECT_SOURCE_DIR}/lib
)

# Link raylib static lib and system libs (Windows-style)
target_link_libraries(${PROJECT_NAME}
        ${PROJECT_SOURCE_DIR}/lib/libraylib.a
        winmm
        gdi32
        opengl32
)
