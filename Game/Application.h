#pragma once

#include <list>

#include "Entity.h"

class Application
{
  public:

	void Start();

	void UpdateEvent();

	void RenderEvent();

  private:

	std::list<Entity*> entities;
};