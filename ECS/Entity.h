#pragma once

class Entity
{

public:
	Entity();
	~Entity();

	inline int GetEntityID() const { return EntityID; };

private:
	int EntityID;
	static int id;
};



