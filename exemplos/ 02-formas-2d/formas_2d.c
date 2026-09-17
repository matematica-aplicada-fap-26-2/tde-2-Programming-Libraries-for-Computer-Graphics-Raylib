#include "raylib.h"

int main()
{
    InitWindow(600, 350, "Formas 2D");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircle(400, 175, 50, PURPLE);
        DrawRectangle(100, 125, 200, 100, SKYBLUE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
