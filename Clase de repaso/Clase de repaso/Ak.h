#pragma once
#include "Arma.h"
class Ak : public Arma{

public:
	Ak();
	Ak(int municionMax, string nombre, int danyoPorBala);
	void Disparar()override; //Hacemos esto para que no haga la funcion de la clase padre, hara la de la hija

};

