#pragma once
#include <iostream>
using namespace std;

class Habitacion{

protected:
	int numeroHab;
	float precio;

public:
	Habitacion();
	Habitacion(int numeroHab, float precio);
	int ConsultarNumeroHab();
	float ConsultarPrecioHab();
	void SetCambiarPrecioHab(float nuevoPrecio);
};

