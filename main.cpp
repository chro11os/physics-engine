#include <iostream>
#include <raylib.h>
int main () {
    int screenWidth = 980;
    int screenHeight = 680;
    InitWindow(screenWidth, screenHeight, "Window");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawFPS(screenWidth/2, screenHeight/2 );
        ClearBackground(BLACK);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}