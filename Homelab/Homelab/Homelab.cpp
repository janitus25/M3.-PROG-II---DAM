#include "Homelab.h"

Homelab::Homelab(){

	nombre = "Default";

}

Homelab::Homelab(string nombre){

	this->nombre = nombre;

}

void Homelab::ActivarHomelab(){

	ventilador.ActivarVentilador();
	cout << "El homelab esta activado" << endl;
	rasberryPi.ActivarPiHole();
	nas.EstadoNas();
	nas.SubirImagen();
	nas.BajarImagen();
}


