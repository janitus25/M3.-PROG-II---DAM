#pragma once
#include "Vehiculo.h"


class Garaje : public Vehiculo{

private:
	Vehiculo vehiculo;
	string nombre;

public:
	Garaje();
	Garaje(Vehiculo vehiculo);
	void modificarVehiculo(string marca, int velocidad, int numeroPuertas, bool tieneCasco);
	void mostrarvehiculo();
};

