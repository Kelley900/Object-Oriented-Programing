#include "Ship.h"

Ship::Ship(std::string name)
{
	this->name = name;
	this->health = 200;
	this->hp = 10;
}

void Ship::takeDamage(int hit)
{
	this->health -= hit;
	if (this->health < 0)
	{
		this->health = 0;
	}
}

int Ship::fire()
{
	return this->hp;
}
std::string Ship::getName()
{
	return this->name;
}

int Ship::getHealth()
{
	return this->health;
}