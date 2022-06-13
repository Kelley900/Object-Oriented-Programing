#include "Unknown.h"

Unknown::Unknown(std::string name):Ship(name)
{
	this->hp = 50;
}

std::string Unknown::getHullType()
{
	return this->ht;
}

void Unknown::setHull(std::string organic)
{
	this->ht = organic;
}