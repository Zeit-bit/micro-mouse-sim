#include "raylib.h"
#include "raygui.h"
#include "appgui.h"

void DrawHeader()
{
  Rectangle bounds = {39.2f, 49.1f, 1606.4f, 114.7f};
  int borderWidth = 3;

  Color borderColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR));

  DrawRectangleRec(bounds, bgColor);
  DrawRectangleLinesEx(bounds, borderWidth, borderColor);

  Rectangle labelBounds = {713.2f, 90.6f, 306.7f, 31.7f};
  GuiLabel(labelBounds, "Micro-Mouse Simulator");
}

void DrawMazeHeader()
{
  Rectangle bounds = {39.2f, 184.7f, 615.6f, 79.1f};
  int borderWidth = 3;

  Color borderColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR));

  DrawRectangleRec(bounds, bgColor);
  DrawRectangleLinesEx(bounds, borderWidth, borderColor);

  Rectangle labelBounds = {315.3f, 208.5f, 68, 31.7f};
  GuiLabel(labelBounds, "Maze");
}

void DrawMouseMemoryHeader()
{
  Rectangle bounds = {1025.3f, 184.7f, 615.6f, 79.1f};
  int borderWidth = 3;

  Color borderColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR));

  DrawRectangleRec(bounds, bgColor);
  DrawRectangleLinesEx(bounds, borderWidth, borderColor);

  Rectangle labelBounds = {1252.6f, 208.5f, 209.8, 31.7f};
  GuiLabel(labelBounds, "Mouse Memory");
}

void DrawMazeContainer()
{
  Rectangle bounds = {41.5f, 277.8, 615.6f, 615.6f};
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));

  DrawRectangleRec(bounds, bgColor);
}

void DrawMouseMemoryContainer()
{
  Rectangle bounds = {1025.3f, 277.8, 615.6f, 615.6f};
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));

  DrawRectangleRec(bounds, bgColor);
}

void DrawSpeedControlContainer()
{
  Rectangle bounds = {
      683.2f,
      662.3f,
      307.8f,
      88.4f};
  int borderWidth = 3;

  Color borderColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR));

  DrawRectangleRec(bounds, bgColor);
  DrawRectangleLinesEx(bounds, borderWidth, borderColor);

  Rectangle labelBounds = {704.4f, 670.6f, 78, 30.2};
  GuiLabel(labelBounds, "Speed:");
}

void DrawBaseFrame()
{
  DrawHeader();
  DrawMazeHeader();
  DrawMouseMemoryHeader();
  DrawMazeContainer();
  DrawMouseMemoryContainer();

  DrawCellControlContainer();
  DrawSpeedControlContainer();
}

void DrawCellControlContainer()
{
  Rectangle bounds = {683.2f, 209.9f, 307.8f, 135.8f};
  int borderWidth = 3;

  Color borderColor = GetColor(GuiGetStyle(DEFAULT, BORDER_COLOR_DISABLED));
  Color bgColor = GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR));

  DrawRectangleRec(bounds, bgColor);
  DrawRectangleLinesEx(bounds, borderWidth, borderColor);

  Rectangle labelBounds = {778.1f, 233.6f, 150.5f, 31.7f};
  GuiLabel(labelBounds, "Cell Count:");
}