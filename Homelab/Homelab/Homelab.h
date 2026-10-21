#pragma once
#include "Ventilador.h"
#include "RaspberryPi.h"
#include "Nas.h"


class Homelab{

private:
	string nombre;
	bool activado=false;
	RaspberryPi rasberryPi;
	Nas nas;
	Ventilador ventilador;

public:
	Homelab();
	Homelab(string nombre);
	void ActivarHomelab();
	void EstadoNas();
};

