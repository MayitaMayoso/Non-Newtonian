#pragma once

#include <list>

#include "Entity.h"

#define C_TEAL		  {8, 126, 139, 255}
#define C_BITTERSWEET {255, 90, 95, 255}
#define C_ONYX		  {60, 60, 60, 255}
#define C_WHITE_SMOKE {245, 245, 245, 255}
#define C_PUCE		  {193, 131, 159, 255}

class Game
{
  public:

	void Start();

	void UpdateEvent();

	void RenderEvent();

	static inline Camera2D camera;

  private:

	std::list<Entity*> entities;
};