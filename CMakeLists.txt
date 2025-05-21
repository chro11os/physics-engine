cmake_minimum_required(VERSION 3.28)
project(physics_engine)

set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(${PROJECT_NAME}
        main.cpp
        headers/DebugCheckers.h
        headers/DebugCheckers.cpp
        headers/camera.cpp
        headers/camera.h
)

# Add your custom include dir (headers)
target_include_directories(${PROJECT_NAME} PRIVATE
        ${PROJECT_SOURCE_DIR}/lib
        ${PROJECT_SOURCE_DIR}/headers
)

# Link raylib static lib and system libs (Windows-style)
target_link_libraries(${PROJECT_NAME}
        ${PROJECT_SOURCE_DIR}/lib/libraylib.a
        "-framework OpenGL"
        "-framework Cocoa"
        "-framework IOKit"
        "-framework CoreVideo"
)