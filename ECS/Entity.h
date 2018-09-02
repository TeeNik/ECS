#pragma once
class Entity
{

public:
	Entity(int ID = -1);
	~Entity();

	inline int GetEntityID() const { return EntityID; };
	static int ID;
private:
	
	int EntityID;
};

