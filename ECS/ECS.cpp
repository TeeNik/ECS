#include "ECS.h"

ECS::ECS()
{
	EntityMan = new EntityManager();
}


ECS::~ECS()
{
	delete EntityMan;
}
