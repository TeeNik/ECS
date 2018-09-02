#include "EntityManager.h"



EntityManager::EntityManager()
{
	EntityID = 0;
}


EntityManager::~EntityManager()
{
}

Entity EntityManager::SpawnEntity()
{
	Entity* entity = new Entity(++EntityID);
	return entity;
}
