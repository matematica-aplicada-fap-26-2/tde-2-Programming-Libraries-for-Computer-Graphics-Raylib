#include "raylib.h"

int main()
{
    InitWindow(600, 350, "Movimentação");

    int x = 275;
    int y = 150;

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_RIGHT) && x < 550) x += 2;
        if (IsKeyDown(KEY_LEFT)  && x > 0)   x -= 2;
        if (IsKeyDown(KEY_UP)    && y > 0)   y -= 2;
        if (IsKeyDown(KEY_DOWN)  && y < 300) y += 2;

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(x, y, 50, 50, PURPLE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

