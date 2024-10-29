#include "Player.h"

#include <iostream>

#include "Game.h"
#include "raymath.h"

Player::Player():
	Entity("Player")
{
	sprite = LoadTexture("Resources/Player.png");
}

Player::~Player()
{
	UnloadTexture(sprite);
}

void Player::Update()
{
	auto direction = Vector2 {IsKeyDown(KEY_D) - IsKeyDown(KEY_A), IsKeyDown(KEY_S) - IsKeyDown(KEY_W)};
	Vector2Normalize(direction);

	speed = Vector2Lerp(speed, Vector2Multiply({maxSpeed, maxSpeed}, direction), .1f);
	position = Vector2Add(position, speed);
}

void Player::Render()
{
	DrawTexture(sprite, position.x, position.y, C_BITTERSWEET);
	Game::camera.target = position;
}
