#include "Character.h"

Character::Character(string nombre, int vida){
	this->nombre = nombre;
	this->vida = vida;
}

string Character::getName(){
	return nombre;
}

int Character::getVida(){
	return vida;
}

void Character::RecibirDanyo(int d){
	vida -= d;

	if (vida <= 0) {
		vida = 0;
	}

}

bool Character::EstaVivo(){

	if (vida > 0) {
		return true;
	}
	else {
		return false;
	}
}
