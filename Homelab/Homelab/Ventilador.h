#pragma once
#include <iostream>
using namespace std;

class Ventilador{

protected:
	int identificador = 0, potencia = 0, tiempoActivacion = 0;
	bool activado = false;

public:
	Ventilador();
	Ventilador(int identificador, int potencia, int tiempoActivacion);
	void ActivarVentilador();
};

