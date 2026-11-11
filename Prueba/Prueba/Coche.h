#pragma once
#include "Rueda.h"

class Coche{

protected:
	Rueda ruedas[4];
	int posicion = 0;
	bool dnf = false;

public:
	Coche();
	Coche(int posicion);
	void Moverse();
	int GetPosicion();
	void EstadoVehiculo();
	bool GetDnf();
};

