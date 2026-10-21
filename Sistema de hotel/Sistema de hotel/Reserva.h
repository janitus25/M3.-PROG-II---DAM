#pragma once
#include "Cliente.h"
#include "Habitacion.h"

class Reserva{

private:
	Cliente cliente;
	Habitacion habitacion;

public:

	Reserva();
	Reserva(string nombre, int cantidadNoches, int numeroHab, float precio);
	float PrecioTotal();
	void MostrarInformacion();

};

