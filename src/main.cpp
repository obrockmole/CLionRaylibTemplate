#include "raylib.h"
#include "../include/raylib_extras.hpp"

int main() {
    const char *windowTitle = "Raylib Template for CLion and C++";

    InitWindow(800, 600, windowTitle);
    SetTargetFPS(30);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(WHITE);
        DrawTextCentered(windowTitle, {GetScreenWidth() / 2.f, GetScreenHeight() / 2.f}, 40, BLACK);

        EndDrawing();
    }

    CloseWindow();
}
