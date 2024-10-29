#pragma once

#include "Entity.h"

class Player : public Entity
{
  public:

	Player();

	~Player();

	void Update() override;

	void Render() override;

  private:

	Vector2 speed;
	float maxSpeed = 10.f;
};