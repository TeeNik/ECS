#pragma once
#include "Entity.h"
#include <map>

class EntityManager
{
private:
	static int EntityID;
	std::map<int, Entity*> EntityContainer;

public:
	EntityManager();
	~EntityManager();
	
	static Entity* SpawnEntity();
};

