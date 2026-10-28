#pragma once
#include "string";
using namespace std;
class objInteractuable{

private:
	float position[2];
	string name;

public:
	objInteractuable();
	objInteractuable(float position[2], string name);
	float GetX();
	float GetY();
};

