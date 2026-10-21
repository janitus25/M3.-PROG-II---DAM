#pragma once
#include <iostream>
using namespace std;

class Edificio{

protected:
	string nombre;

public:
	Edificio();
	Edificio(string nombre);

	virtual void Mostrar();
	string GetNombre();

};

