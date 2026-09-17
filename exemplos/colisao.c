#include "raylib.h"

int main()
{
    InitWindow(600, 350, "Colisão");

    Rectangle player = {100, 150, 50, 50};
    Vector2 circle = {400, 175};

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_RIGHT) && player.x < 550) player.x += 2;
        if (IsKeyDown(KEY_LEFT)  && player.x > 0)   player.x -= 2;
        if (IsKeyDown(KEY_UP)    && player.y > 0)   player.y -= 2;
        if (IsKeyDown(KEY_DOWN)  && player.y < 300) player.y += 2;

        bool colisao = CheckCollisionCircleRec(circle, 50, player);

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircleV(circle, 50, colisao ? RED : PURPLE);
        DrawRectangleRec(player, SKYBLUE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

