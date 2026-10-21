#pragma once
#include "Ventilador.h"

class RaspberryPi : public Ventilador{


public:
	RaspberryPi();
	RaspberryPi(int identificador, int potencia, int tiempoActivacion);

	void ActivarPiHole();
};

