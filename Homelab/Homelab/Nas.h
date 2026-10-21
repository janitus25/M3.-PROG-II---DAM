#pragma once
#include "Ventilador.h"

class Nas : public Ventilador{

private:
	string ultimaActualizacion = "1/1/2000";

public:
	Nas();
	Nas(int identificador, int potencia, int tiempoActivacion, string ultimaActualizacion);

public:
	void SubirImagen();
	void BajarImagen();
	void ActivarNas(string ultimaActualizacion);
	void EstadoNas();
};

