#include "Entity.h"
#include <iostream>



int Entity::id = 0;

Entity::Entity()
{
	++id;
	EntityID = id;
	std::cout << "Entity: " << EntityID << " created\n";
}

Entity::~Entity()
{
	std::cout << "Entity: " << EntityID << " destroyed\n";
	if (EntityID == 10)
	{
		std::cout << "Entity: " << EntityID << " destroyed\n";
	}
}
