#include "Moto.h"

Moto::Moto(){

	marca = "Default";
	velocidad = 0;
	tieneCasco = 0;

}

Moto::Moto(string marca, int velocidad, bool tieneCasco) : Vehiculo(marca, velocidad){



}

void Moto::MostrarInfo() {

	cout << "Marca: " << marca;
	cout << "Velocidad: " << velocidad;
	cout << "Numero de puertas: " << tieneCasco;

}