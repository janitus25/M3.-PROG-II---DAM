#pragma once
#include "Rueda.h"
#include "Motor.h"
#include "CajaCambios.h"
#include "Amortiguador.h"

class Coche {

private:
	string nombre;
	Motor* motor;
	Rueda ruedas[4];
	CajaCambios caja;
	Amortiguador amortiguador;

public:
	Coche(string nombre, Motor* motor);
	void Arrancar();
	int Acelerar();
	void InflarRuedas(int cantidad);
	void Bache(int golpe);
	void PrintCoche();
};