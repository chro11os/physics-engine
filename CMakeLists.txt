cmake_minimum_required(VERSION 3.28)
project(physics_engine)

set(CMAKE_CXX_STANDARD 17)

# Set raylib paths
set(RAYLIB_INCLUDE_DIR "/Users/neilbragsguzman/raylib/build/raylib/include")
set(RAYLIB_LIB_DIR "/Users/neilbragsguzman/raylib/build/raylib")

# Tell CMake where to find headers
include_directories(${RAYLIB_INCLUDE_DIR})
include_directories("/Users/neilbragsguzman/Documents/GitHub/physics-engine/headers")

# Add the executable
add_executable(physics_engine main.cpp
        headers/camera.h
        headers/camera.cpp)

# Link the static library and necessary frameworks
target_link_libraries(physics_engine
        /Users/neilbragsguzman/raylib/build/raylib/libraylib.a
        "-framework OpenGL"
        "-framework Cocoa"
        "-framework IOKit"
        "-framework CoreVideo"
)
