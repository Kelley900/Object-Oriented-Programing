//Child Class
#pragma once
//define libraries
#include "Ship.h"
#include <string>
using namespace std;

class USship:
	public Ship
{
public:
	USship(string name);
	std::string getHullType();
	void setHull(std::string titanium);
};