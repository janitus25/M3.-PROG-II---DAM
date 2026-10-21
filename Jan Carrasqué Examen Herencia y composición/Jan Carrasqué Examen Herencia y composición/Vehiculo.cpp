#include "Vehiculo.h"

Vehiculo::Vehiculo(){
	marca = "Ferrrari";
	velocidad = 150;
}

Vehiculo::Vehiculo(string marca, int velocidad){
	this->marca = marca;
	this->velocidad = velocidad;
}

int Vehiculo::acelerar(){
	return velocidad + 10;
}

void Vehiculo::mostrarInfo(){
	cout << "Marca: " << marca<<endl;
	cout << "Velocidad: " << velocidad<<endl;
}
