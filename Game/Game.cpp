#include "Game.h"

#include "Player.h"
#include "raylib.h"

void Game::Start()
{
	InitWindow(1920, 1080, "Non-Newtonian");
	SetTargetFPS(60.f);

	camera = {0};
	camera.offset = (Vector2) {GetScreenWidth() * .3f, GetScreenHeight() * .5f};
	camera.rotation = 0.0f;
	camera.zoom = 2.0f;

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

void Game::UpdateEvent()
{
	for (auto entity : entities)
	{
		entity->Update();
	}
}

void Game::RenderEvent()
{
	BeginDrawing();
	ClearBackground(C_ONYX);

	BeginMode2D(camera);

	for (auto i = 0.f; i < 100.f; i++)
	{
		DrawLine(i * 100.f, 0, i * 100.f, 100.f, RED);
		DrawLine(0, i * 100.f, 100.f, i * 100.f, RED);
	}

	for (auto entity : entities)
	{
		entity->Render();
	}

	EndMode2D();
	EndDrawing();
}