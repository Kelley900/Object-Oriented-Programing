//Child Class
#pragma once
//define libraries
#include "Ship.h"
#include <string>
using namespace std;

class Unknown :
	public Ship
{
public:
	Unknown(std::string name);
	std::string getHullType();
	void setHull(std::string organic);
};

