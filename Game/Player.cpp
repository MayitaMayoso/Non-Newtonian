#include "Player.h"

Player::Player():
	Entity("Player")
{
	sprite = LoadTexture("Resources/Player.png");
}

Player::~Player()
{
	UnloadTexture(sprite);
}

void Player::Render()
{
	DrawTexture(sprite, position.x, position.y, WHITE);
}
