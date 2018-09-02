#include "Entity.h"
#include <iostream>


Entity::Entity(int ID = -1)
{
	EntityID = ID;
	std::cout << "Entity: " << EntityID << " created\n";
}


Entity::~Entity()
{
	std::cout << "Entity: " << EntityID << " destroyed\n";
}
