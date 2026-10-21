#include "Vehiculo.h"


Vehiculo::Vehiculo(){
	marca = "Ferrari";
	potencia = 500;
}

Vehiculo::Vehiculo(string marca, int potencia){
	this->marca = marca;
	this -> potencia = potencia;
}

void Vehiculo::Arrancar(){
	cout << "Arrancando vehiculo";
}

int Vehiculo::GetPotencia(){
	return potencia;
}
