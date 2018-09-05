#pragma once
#include "EntityManager.h"
#include <memory>

class ECS
{
public:
	static ECS& Instance()
	{
		static ECS ecs;
		return ecs;
	}

	inline std::unique_ptr<EntityManager>& GetEntityManager() { return EntityMan; }

private:
	ECS();
	~ECS();

	ECS(ECS const&) = delete;
	ECS& operator= (ECS const&) = delete;

	std::unique_ptr<EntityManager> EntityMan;
};

