#pragma once
#include <iostream>
using namespace std;

class Robot{

protected:
	string nombre = "Default";

public:
	Robot(string nombre);
	string getName();
};

