#pragma once
#include "Arma.h"

class Scar : public Arma{

	Scar();
	Scar(int municionMax, string nombre, int danyoPorBala);
	void Disparar()override;

};

