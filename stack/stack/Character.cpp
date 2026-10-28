#include "Character.h"

Character::Character(){
	position[0] = 0;
	position[1] = 0;
	name = "Default";
}

Character::Character(float position[2], string name){
	this->position[0] = position[0];
	this->position[1] = position[1];
	this->name = name;
}

void Character::Interact(){

	cout << "Observando si hay un objeto a interacturar\n";

	// TO DO -- LLAMAR AL PADRE PARA BUSCAR OBJETO

}

void Character::Ability(){
	cout << "Tripulante no actua\n";
}

void Character::MoveX(float pos){
	position[0] += pos;
}

void Character::MoveY(float pos){
	position[1] += pos;
}

float Character::GetX() {

	return position[0];

}


float Character::GetY() {
	return position[1];
}

void Character::SetGestor(Gestor* gestor){
	this-> gestor = gestor;
}
