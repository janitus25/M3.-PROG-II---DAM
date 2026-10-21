#include "Moto.h"

Moto::Moto() : Vehiculo(){
	marca = "Honda";
	velocidad = 100;
	tieneCasco = true;
}

Moto::Moto(string marca, int velocidad, bool tieneCasco) : Vehiculo(marca, velocidad){
	this->tieneCasco = tieneCasco;
}

void Moto::mostrarInfo(){
	cout << "Marca: " << marca << endl;
	cout << "Velocidad: " << velocidad << endl;
	cout << "Tiene casco: " << tieneCasco << endl;
	cout << endl;
}
