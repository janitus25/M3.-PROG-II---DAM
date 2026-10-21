#pragma once
#include "Animal.h"

class Dog : public Animal{

private:
	int ladridos = 0;

public:

	Dog(string nombre, int energia, int ladridos);
	int Ladrar();
	void printDog();
};

