#include <iostream>
#include <raylib.h>
#include "camera.h"
#include "DebugCheckers.h"

int main () {
    int constexpr ScreenWidth = 980;
    int constexpr ScreenHeight = 680;

    InitWindow(ScreenWidth, ScreenHeight, "Window");
    const Camera camera = CreateDefaultCamera();
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        isWindowsActive();

        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(70,10);

            BeginMode3D(camera);
                DrawCube(Vector3{ 0.0f, 0.0f, 0.0f }, 1.0f, 1.0f, 1.0f, RED);
                DrawGrid(10, 1.0f);
            EndMode3D();

        DrawText("Cube" , 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
