#include "Edificio.h"

Edificio::Edificio(){

	nombre = "Default";

}

Edificio::Edificio(string nombre){
	this->nombre = nombre;
}

void Edificio::Mostrar(){

	cout << "Nombre: " << nombre << endl;

}

string Edificio::GetNombre(){
	return nombre;
}
