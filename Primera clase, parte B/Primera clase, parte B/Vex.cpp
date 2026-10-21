#include "Vex.h"

Vex::Vex(){

	motoresDelante = Motor();
	motoresDetras = Motor();

}

void Vex::Acelerar(float porcentaje){
	motoresDelante.Acelerar(porcentaje);
	motoresDetras.Acelerar(porcentaje);
}

void Vex::MostrarEstadoDelRobot(){

	cout << "Motores de delante: "<< motoresDelante.GetDegradacion()<<"\n";
	cout << "Motores de detras: "<< motoresDetras.GetDegradacion() << "\n";
}

void Vex::ModificarMotores(int posicion, int estado, int porcentaje){

	if (posicion == 0) {
		motoresDelante.SetMotores(estado, porcentaje);
	}

}

void Vex::ModificarEstado(int _estado, int motorPos){

	if (motorPos == 0) {
		motoresDelante.AjustarEstado(_estado);
	}

	else if (motorPos == 1) {
		motoresDetras.AjustarEstado(_estado);
	}

	else {
		cout << "El motor seleccionado no existe";
	}

}

void Vex::Frenar(float porcentaje) {
	motoresDelante.Frenar(porcentaje);
	motoresDetras.Frenar(porcentaje);
}
