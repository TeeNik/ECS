#include "EntityManager.h"
#include <iostream>

EntityManager::EntityManager()
{
	//EntityID = 0;
}


EntityManager::~EntityManager()
{
	std::cout << "deleting\n";
	auto itr = EntityContainer.begin();
	while (itr != EntityContainer.end())
	{
		delete itr->second;
		++itr;
	}
}

Entity* EntityManager::SpawnEntity()
{
	Entity* entity = new Entity();
	EntityContainer[entity->GetEntityID()] = entity;
	return entity;
}
