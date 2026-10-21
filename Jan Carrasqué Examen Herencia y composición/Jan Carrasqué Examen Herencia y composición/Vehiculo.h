#pragma once
#include <iostream>
using namespace std;

class Vehiculo{

protected:
	string marca;
	int velocidad;

public:
	Vehiculo();
	Vehiculo(string marca, int velocidad);
	int acelerar();
	virtual void mostrarInfo();
};

