#pragma once
#include "Vehiculo.h"

class Coche : public Vehiculo{

private:
	int numeroPuertas;

public:
	Coche();
	Coche(string marca, int velocidad, int numeroPuertas);
	void mostrarInfo() override;
};

