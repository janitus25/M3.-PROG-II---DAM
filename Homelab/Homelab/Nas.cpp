#include "Nas.h"

Nas::Nas(){

	ultimaActualizacion = "Nunca";

}

Nas::Nas(int identificador, int potencia, int tiempoActivacion, string ultimaActualizacion) : Ventilador(identificador, potencia, tiempoActivacion){

	this->ultimaActualizacion = ultimaActualizacion;
	

}

void Nas::SubirImagen(){
	cout << "Se esta subiendo";
}

void Nas::BajarImagen(){
	cout << "Se esta bajando";
}

void Nas::ActivarNas(string ultimaActualizacion){
	cout << "Ultima actualizacion: " << ultimaActualizacion;
}

void Nas::EstadoNas(){

	cout << "Id: " << identificador<<endl;
	cout << "Potencia: " << potencia <<endl;
	cout << "Tiempo de activacion: " << tiempoActivacion <<endl;
	cout << "Ultima actualizacion: " << ultimaActualizacion <<endl;
}
