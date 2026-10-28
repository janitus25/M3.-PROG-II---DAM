#include "objInteractuable.h"

objInteractuable::objInteractuable(){
	position[0] = 0;
	position[1] = 0;
	name = "Default";
}

objInteractuable::objInteractuable(float position[2], string name){
	this->position[0] = position[0];
	this->position[1] = position[1];
	this->name = name;
}

float objInteractuable::GetX(){
	return position[0];
}

float objInteractuable::GetY(){
	return position[1];
}
