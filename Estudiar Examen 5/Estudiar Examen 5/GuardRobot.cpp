#include "GuardRobot.h"

GuardRobot::GuardRobot(string nombre, int alarmas) : Robot(nombre){
	this->alarmas = alarmas;
}

bool GuardRobot::vigilar(){

	if (alarmas > 0) {
		alarmas -= 1;
		return true;
	}

	else {
		return false;
	}

}
