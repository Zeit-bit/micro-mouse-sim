#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include "appgui.h"

int main(void)
{
    // [Init]
    const int screenWidth = 1680;
    const int screenHeight = 945;
    InitWindow(screenWidth, screenHeight, "micro-mouse simulator");
    GuiSetStyle(DEFAULT, TEXT_SIZE, 29);
    GuiSetStyle(DEFAULT, BORDER_WIDTH, 3);
    GuiSetFont(LoadFont("resources/CanvaSans-Bold.ttf"));
    int baseTextColor = GuiGetStyle(DEFAULT, TEXT_COLOR_NORMAL);

    // [State]
    float speed = 5;
    int cellCount = 4;

    while (!WindowShouldClose())
    {
        // [Update]

        // [Draw]
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawBaseFrame();

        // Cell Count Label
        GuiSetStyle(DEFAULT, TEXT_COLOR_NORMAL, GuiGetStyle(DEFAULT, TEXT_COLOR_PRESSED));
        GuiLabel({828.7, 272.6, 36.7, 47}, TextFormat("%d", cellCount));
        GuiSetStyle(DEFAULT, TEXT_COLOR_NORMAL, baseTextColor);

        // Controls
        GuiButton({707.6f, 272.6, 83.8, 57.3}, "-");
        GuiButton({888.7f, 272.6, 83.8, 57.3}, "+");
        GuiButton({683.2f, 359.7, 307.8, 66.6}, "Generate Maze");
        GuiButton({683.2f, 440.4, 145.8, 58.6}, "Set Start");
        GuiButton({846.3f, 440.4, 145.8, 58.6}, "Set Goal");
        GuiButton({683.2f, 513, 307.8, 66.6}, "Solve");
        GuiButton({683.2f, 585.6, 307.8, 66.6}, "Stop");
        GuiButton({683.2f, 762.7, 307.8, 66.6}, "Reset Memory");
        GuiSliderBar({698.7, 705.4, 278.9, 19}, nullptr, nullptr, &speed, 1, 9);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}