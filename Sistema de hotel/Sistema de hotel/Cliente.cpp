#include "Cliente.h"

Cliente::Cliente(){

	nombre = "Default";
	cantidadNoches = 3;
}

Cliente::Cliente(string nombre, int cantidadNoches){

	this->nombre = nombre;
	this->cantidadNoches = cantidadNoches;
	
}

string Cliente::GetName(){
	return nombre;
}

int Cliente::GetNights(){
	return cantidadNoches;
}
