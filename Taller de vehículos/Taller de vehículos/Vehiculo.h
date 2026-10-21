#pragma once
#include <iostream>
using namespace std;

class Vehiculo{


protected:
	string marca;
	int potencia;

public:
	Vehiculo();
	Vehiculo(string marca, int potencia);

	virtual void Arrancar();
	int GetPotencia();

};

