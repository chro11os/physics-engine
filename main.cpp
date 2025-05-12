#include <iostream>
#include <raylib.h>
#include "camera.h"
#include "DebugCheckers.h"

int main () {
    int constexpr ScreenWidth = 980;
    int constexpr ScreenHeight = 680;
    InitWindow(ScreenWidth, ScreenHeight, "Window");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        isWindowsActive();
        BeginDrawing();
        DrawFPS(ScreenWidth/2, ScreenHeight/2 );
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
