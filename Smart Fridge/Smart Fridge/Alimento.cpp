#include "Alimento.h"

Alimento::Alimento(){
	idProducto = 0;
	nombre = "Default";
	fecha = "Default";
}

Alimento::Alimento(int idProducto, string nombre, string fecha){
	this->idProducto = idProducto;
	this->nombre = nombre;
	this->fecha= fecha;
}

int Alimento::GetId(){
	return idProducto;
}

string Alimento::Getnombre(){
	return nombre;
}

string Alimento::Getfecha(){
	return fecha;
}
