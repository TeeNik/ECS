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
		itr->second.reset();
		++itr;
	}
}

std::shared_ptr<Entity> EntityManager::SpawnEntity()
{
	std::shared_ptr<Entity> entity = std::make_shared<Entity>();
	EntityContainer[entity->GetEntityID()] = entity;
	return entity;
}
