#include "Coche.h"

Coche::Coche(){

	marca = "Default";
	velocidad = 0;
	numeroPuertas = 4;

}

Coche::Coche(string marca, int velocidad, int numeroPuertas) : Vehiculo(marca, velocidad){

	this->numeroPuertas = numeroPuertas;

}

void Coche::MostrarInfo(){
	cout << "Marca: " << marca;
	cout << "Velocidad: " << velocidad;
	cout << "Numero de puertas: " << numeroPuertas;
}
