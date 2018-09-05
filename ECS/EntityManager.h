#pragma once
#include "Entity.h"
#include <map>
#include <memory>

class EntityManager
{
private:
	static int EntityID;
	std::map<int, std::shared_ptr<Entity>> EntityContainer;

public:
	EntityManager();
	~EntityManager();
	
	std::shared_ptr<Entity> SpawnEntity();
};

