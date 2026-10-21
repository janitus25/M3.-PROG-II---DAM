#include "Vehiculo.h"

Vehiculo::Vehiculo(){

	marca = "Default";
	velocidad = 0;
}

Vehiculo::Vehiculo(string marca, int velocidad){
	this->marca = marca;
	this->velocidad = velocidad;
}

void Vehiculo::Acelerar(){
	velocidad += 10;
}

void Vehiculo::MostrarInfo(){

	cout << "Marca: "<<marca;
	cout << "Velocidad: "<<velocidad;

}

void Vehiculo::SetMarca(string marca){



}
