#include "RaspberryPi.h"

RaspberryPi::RaspberryPi(){

	identificador = 5116;
	potencia = 50;
	tiempoActivacion = 20;

}

RaspberryPi::RaspberryPi(int identificador, int potencia, int tiempoActivacion) : Ventilador(identificador, potencia, tiempoActivacion){

}

void RaspberryPi::ActivarPiHole(){

	Ventilador::ActivarVentilador();
	cout << "Pi-hole esta activado";
}
