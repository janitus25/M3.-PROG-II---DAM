#include "Herramienta.h"

Herramienta::Herramienta(){

	nombre = "Generica";
	peso = 1;

}

Herramienta::Herramienta(string nombre, int peso){
	this->nombre = nombre;
	this->peso = peso;
}

void Herramienta::Usar(){
	cout << "Usando herramienta generica" << endl;
}

string Herramienta::GetNombre(){
	return nombre;
}

int Herramienta::GetPeso(){
	return peso;
}
