#include "Robot.h"

Robot::Robot(string nombre){
	this->nombre = nombre;
}

string Robot::getName(){
	return nombre;
}
