#include "raylib.h"

int main() {
    //inicializando a janela (largura, altura, título)
    InitWindow(800, 450, "My first game");

    //define a taxa de quadros por segundos (FPS)
    SetTargetFPS(60);

    //loop principal
    while (!WindowShouldClose()) {
        BeginDrawing(); //Comece a desenhar
        ClearBackground(RAYWHITE); //Define a cor de fundo

        DrawText("Olá, Raylib!", 350, 280, 20, DARKGRAY); //Escrevendo na tela

        EndDrawing(); //Terminar o desenho
    }
    CloseWindow(); //Fechando a janela ao sair

    return 0;
}