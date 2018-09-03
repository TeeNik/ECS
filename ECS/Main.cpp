#include <cstdlib> 
#include "ECS.h"

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		ECS::Instance().GetEntityManager()->SpawnEntity();
	}
	system("pause");
}
