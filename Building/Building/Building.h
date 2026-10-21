#pragma once
#include <iostream>
using namespace std;

class Building{

protected:
	string nombre;

public:
	Building();
	Building(string nombre);
	string getName();
};

