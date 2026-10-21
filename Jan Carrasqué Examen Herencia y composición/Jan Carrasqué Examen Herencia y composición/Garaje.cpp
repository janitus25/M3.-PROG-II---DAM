#include "Garaje.h"

Garaje::Garaje(){
}

Garaje::Garaje(Vehiculo vehiculo){
	this->vehiculo = vehiculo;
}

void Garaje::modificarVehiculo(string _marca, int _velocidad, int numeroPuertas, bool tieneCasco){
	marca = _marca;
	velocidad = _velocidad;
	numeroPuertas = numeroPuertas;
	tieneCasco = tieneCasco;
}


void Garaje::mostrarvehiculo(){
	//cout << "Vehiculo guardado: " << vehiculo.mostrarInfo() << endl; //error de compilacion que no entendemos ni Pol ni YO
}
