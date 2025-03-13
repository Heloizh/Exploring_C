#include "raylib.h"

int main() {
    InitWindow(800, 600, "Two Squads Move");    
    SetTargetFPS(60);

    int x_green = 350, x_red = 450, y_green = 250, y_red = 250;

    while(!WindowShouldClose()) {

        /* movendo bloco verde */
        if(IsKeyDown(KEY_D)) x_green += 5;
        if(IsKeyDown(KEY_A)) x_green -= 5;
        if(IsKeyDown(KEY_W)) y_green -= 5;
        if(IsKeyDown(KEY_S)) y_green += 5;

        /* movendo bloco vermelho */
        if(IsKeyDown(KEY_RIGHT)) x_red += 5;
        if(IsKeyDown(KEY_LEFT)) x_red -= 5;
        if(IsKeyDown(KEY_DOWN)) y_red += 5;
        if(IsKeyDown(KEY_UP)) y_red -= 5;


        //Desenhando
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(x_green, y_green, 100, 100, GREEN);
        DrawRectangle(x_red, y_red, 100, 100, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}