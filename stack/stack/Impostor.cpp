#include "Impostor.h"

Impostor::Impostor() : Character() {
}

Impostor::Impostor(float position[2], string name) : Character(position, name){
}

void Impostor::Ability(){

	cout << "Kill try\n";

	// TO DO LLAMAR AL GESTOR
}

void Impostor::Interact(){
	cout << "Nothing\n";
}

void Impostor::Sabotage(){
	
	cout << "Sabotage Try";

	// GESTOR SI DA TIEMPO
}
