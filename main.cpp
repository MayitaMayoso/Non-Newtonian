#include <iostream>

#include "raylib.h"

void UpdateEvent()
{
}

void RenderEvent()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	EndDrawing();
}

int main()
{
	InitWindow(1920, 1080, "Non-Newtonian");

	while (!WindowShouldClose()) // Detect window close button or ESC key
	{
	}

	return 0;
}