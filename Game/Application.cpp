#include "Application.h"

#include "Player.h"
#include "raylib.h"

void Application::Start()
{
	InitWindow(1920, 1080, "Non-Newtonian");

	entities.push_back(new Player());

	while (!WindowShouldClose()) // Detect window close button or ESC key
	{
		UpdateEvent();

		RenderEvent();
	}

	for (auto entity : entities)
	{
		delete entity;
	}
	entities.clear();

	CloseWindow();
}

void Application::UpdateEvent()
{
	for (auto entity : entities)
	{
		entity->Render();
	}
}

void Application::RenderEvent()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);

	for (auto entity : entities)
	{
		entity->Render();
	}

	EndDrawing();
}