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
	void Acelerar();
	virtual void MostrarInfo();
	string GetMarca();
	int GetVelocidad();
	void SetMarca(string marca);
	void SetVelocidad(int velocidad);
};

