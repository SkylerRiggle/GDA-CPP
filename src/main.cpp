#include "../include/raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Base Application");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Base Application - Hello World!", 10, 10, 20, RED);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}