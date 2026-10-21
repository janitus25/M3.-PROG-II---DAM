#include "Coche.h"

Coche::Coche() : Vehiculo() {
	marca = "Mclaren";
	velocidad = 60;
	numeroPuertas = 2;
}

Coche::Coche(string marca, int velocidad, int numeroPuertas) : Vehiculo(marca, velocidad) {
	this->numeroPuertas = numeroPuertas;
}

void Coche::mostrarInfo(){
	cout << "Marca: " << marca << endl;
	cout << "Velocidad: " << velocidad << endl;
	cout << "Numero de puertas: " << numeroPuertas << endl;
	cout << endl;
}
