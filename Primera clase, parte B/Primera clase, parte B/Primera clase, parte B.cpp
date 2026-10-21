#include "Vex.h"

int main(){

    Vex LordOfTheRings = Vex(Motor(1, 100), Motor(1, 75));
    int accion;

	do{
		cout <<"\nQue accion va a hacer el robot? \ 1. Acelerar 2.MostrarEstado 3.Frenar 4.Salir\n";
		cin >> accion;

		switch (accion){

		case 1:
			LordOfTheRings.Acelerar(10);
			break;

		case 2:
			LordOfTheRings.MostrarEstadoDelRobot();
			break;

		case 3:
			accion = -1;
			break;
		
		default:
			cout << "Valor no valido";
			break;
		}

	} while (accion != -1);
}

//Constructores por omision y por parametros

//Hay constructor y destructor, el destructor simple para limpiar la ram, limpiando todo el array