#include "raylib.h"

int main()
{
    InitWindow(600, 350, "Teste com Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Hello Raylib! :)", 180, 160, 30, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}