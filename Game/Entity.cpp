#include "Entity.h"

#include <random>

Entity::Entity(const std::string& EntityName):
	id(rand() % std::numeric_limits<uint32_t>::max()),
	name(EntityName)
{
}

void Entity::Init()
{
}

void Entity::Destroy()
{
}

void Entity::Update()
{
}

void Entity::Render()
{
}