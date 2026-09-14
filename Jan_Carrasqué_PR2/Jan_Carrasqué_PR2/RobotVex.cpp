#include "RobotVex.h"

void RobotVex::AgregarRueda(int num){
	cout << "Agregamos rueda\n";
}

void RobotVex::ActivarElevador(int motornum){
	cout << "Activamos elevador\n";
}

void RobotVex::ActivarAutonoma(){
	cout << "Activar autonoma\n";
}

bool RobotVex::Colision(){
	cout << "Colision devolvera verdadero o falso al ser bool\n"; //falso en este caso
	return false;
}
