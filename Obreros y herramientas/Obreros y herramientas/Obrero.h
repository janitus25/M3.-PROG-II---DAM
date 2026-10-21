#pragma once
#include "Herramienta.h"

class Obrero{

protected:

	string nombre = "Default";
	int energia = 0;
	int posicion[2];
	Herramienta *herramienta;

public:
	Obrero();
	Obrero(string nombre, Herramienta *herramienta);
	void Moverse(int d[2]);
	void Trabajar();
	void Cansarse(Herramienta h);
	Herramienta GetHerramienta();
};

