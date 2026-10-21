#pragma once
#include "Vehiculo.h"

class Moto : public Vehiculo{

private:
	bool tieneCasco;

public:
	Moto();
	Moto(string marca, int velocidad, bool tieneCasco);
	void mostrarInfo() override;
};

