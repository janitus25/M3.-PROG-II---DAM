#include "Habitacion.h"

Habitacion::Habitacion(){

	numeroHab = 0;
	precio = 50;

}

Habitacion::Habitacion(int numeroHab, float precio){

	this->numeroHab = numeroHab;
	this->precio = precio;

}

int Habitacion::ConsultarNumeroHab(){
	return numeroHab;
}

float Habitacion::ConsultarPrecioHab(){
	return precio;
}

void Habitacion::SetCambiarPrecioHab(float nuevoPrecio){

	precio = nuevoPrecio;

}
