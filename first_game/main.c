#include "raylib.h"

int main()
{
    InitWindow(800, 600, "Quadrado Simples");
    SetTargetFPS(60);

    /* definindo posição inicial do quadrado */
    int x = 350, y = 250;

    while (!WindowShouldClose())
    {
        //Detectando teclas pressionadas
        if(IsKeyDown(KEY_RIGHT)) x += 5; //movendo 5 passos para direita
        if(IsKeyDown(KEY_LEFT)) x -= 5; //movendo 5 passos para esquerda
        if(IsKeyDown(KEY_DOWN)) y += 5; //movendo 5 passos para baixo
        if(IsKeyDown(KEY_UP)) y -= 5; //movendo 5 passos para cima



        //Desenhando
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(x, y, 100, 100, RED); // Desenha um quadrado vermelho (posição x, posição y, largura, altura, cor)
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
