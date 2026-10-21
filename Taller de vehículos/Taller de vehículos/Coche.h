#pragma once
#include "Vehiculo.h"
#include "Cambio.h"
#include "Freno.h"
#include "Rueda.h"


class Coche : public Vehiculo{

private:
	Rueda ruedas[4];
	Cambio cambio;
	Freno freno;

public:
	Coche();
	Coche(string marca, int potencia);
	void Arrancar() override;
	int Acelerar();
	void InflarRuedas(int cantidad);
	void Frenar(int velocidad);
	void MostrarInfo();
};

