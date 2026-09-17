#include "raylib.h"

int main()
{
    // Cria a janela
    InitWindow(800, 450, "Gráficos 3D");

    // Configura a câmera
    Camera3D camera = { 0 };
    camera.position = (Vector3){ 6.0f, 6.0f, 6.0f };
    camera.target = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    SetTargetFPS(60);
        ClearBackground(RAYWHITE);

        // Renderização 3D
        BeginMode3D(camera);

        // Chão
        DrawPlane(
            (Vector3){ 0.0f, 0.0f, 0.0f },
            (Vector2){ 10.0f, 10.0f },
            LIGHTGRAY
        );

        // Cubo 3D
        DrawCube(
            (Vector3){ 0.0f, 1.0f, 0.0f },
            2.0f, 2.0f, 2.0f,
            PURPLE
        );

        // Contorno do cubo
        DrawCubeWires(
            (Vector3){ 0.0f, 1.0f, 0.0f },
            2.0f, 2.0f, 2.0f,
            DARKPURPLE
        );

        // Grade
        DrawGrid(10, 1.0f);

        EndMode3D();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Renderização 3D
        BeginMode3D(camera);

        // Chão
        DrawPlane(
            (Vector3){ 0.0f, 0.0f, 0.0f },
            (Vector2){ 10.0f, 10.0f },
            LIGHTGRAY
        );

        // Cubo 3D
        DrawCube(
            (Vector3){ 0.0f, 1.0f, 0.0f },
            2.0f, 2.0f, 2.0f,
            PURPLE
        );

        // Contorno do cubo
        DrawCubeWires(
            (Vector3){ 0.0f, 1.0f, 0.0f },
            2.0f, 2.0f, 2.0f,
            DARKPURPLE
        );

        // Grade
        DrawGrid(10, 1.0f);

        EndMode3D();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
