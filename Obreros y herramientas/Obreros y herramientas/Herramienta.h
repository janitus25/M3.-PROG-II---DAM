#pragma once
#include <iostream>
using namespace std;

class Herramienta{

protected:
	string nombre = "Default";
	int peso = 0;

public:
	Herramienta();
	Herramienta(string nombre, int peso);
	virtual void Usar();
	string GetNombre();
	int GetPeso();

};

