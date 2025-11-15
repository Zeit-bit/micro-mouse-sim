#include "raylib.h"
#include <string>

int main(void)
{
    // [Init]
    const int screenWidth = 800;
    const int screenHeight = 450;
    std::string message = "Hello World!";

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // [Update]

        // [Draw]
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(message.c_str(), GetScreenWidth() / 2 - message.length() / 2 * 10, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
