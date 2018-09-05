#include "ECS.h"

ECS::ECS()
{
	EntityMan = std::make_unique<EntityManager>();
}


ECS::~ECS()
{
	//delete EntityMan;
}
