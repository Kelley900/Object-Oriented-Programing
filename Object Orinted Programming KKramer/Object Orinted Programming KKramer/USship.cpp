#include "USship.h"

USship::USship(std::string name):Ship(name)
{
	this->hp = 50;
}

std::string USship::getHullType()
{
	return this -> ht;
}

void USship::setHull(std::string titanim)
{
	this->ht = titanim;
}