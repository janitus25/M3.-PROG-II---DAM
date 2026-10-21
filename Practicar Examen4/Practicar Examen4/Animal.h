#pragma once
#include <iostream>
using namespace std;

class Animal{

protected:
	string nombre = "Default";
	int energia = 0;

public:
	Animal(string nombre, int energia);
	string getName();
	int getEnergia();
	void GastarEnergia(int e);
};

