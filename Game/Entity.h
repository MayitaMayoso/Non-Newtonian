#pragma once

#include <cstdint>
#include <string>

#include "raylib.h"

class Entity
{
  public:

	Entity(const std::string& EntityName);

	virtual void Init();

	virtual void Destroy();

	virtual void Update();

	virtual void Render();

	uint64_t id;
	std::string name;
	Vector2 position = {0.f, 0.f};
	Vector2 scale {1.f, 1.f};
	float depth = 0.f;
	float angle = 0.f;
	Texture2D sprite;
};