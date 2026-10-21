#include "Ventilador.h"

Ventilador::Ventilador(){
	identificador = 5215415;
	potencia = 100;
	tiempoActivacion = 2;
}

Ventilador::Ventilador(int identificador, int potencia, int tiempoActivacion){
	this->identificador = identificador;
	this->potencia = potencia;
	this->tiempoActivacion = tiempoActivacion;
}

void Ventilador::ActivarVentilador(){

	activado = true;
	cout << "Identificador: " << identificador << endl;
	cout << "Potencia: "<<potencia << endl;

}
