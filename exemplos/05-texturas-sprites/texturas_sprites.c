#include "raylib.h"

int main()
{
    // Cria a janela
    InitWindow(600, 350, "Texturas/Sprites");

    // Carrega o spritesheet
    Texture2D bea = LoadTexture("assets/bea_spritesheet.png");

    // Define o frame que será recortado do spritesheet
    Rectangle frame = {0, 0, 200, 218.33f};

    // Define a posição e o tamanho do sprite na tela
    Rectangle destino = {250, 100, 100, 110};

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Desenha o frame selecionado na tela
        DrawTexturePro(bea, frame, destino, (Vector2){0, 0}, 0, WHITE);

        EndDrawing();
    }

    // Libera a textura e fecha a janela
    UnloadTexture(bea);
    CloseWindow();

    return 0;
}