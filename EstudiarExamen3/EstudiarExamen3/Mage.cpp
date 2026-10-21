#include "Mage.h"

Mage::Mage(string nombre, int vida, int mana) : Character(nombre, vida){
	this->mana = mana;
}

int Mage::LanzarHechizo(){
	
	if (mana >= 10) {
		mana -= 10;
		return 25;
	}

	else {
		return 0;
	}
}

void Mage::printMage(){
	cout << "Nombre: " << nombre << endl;
	cout << "Vida: " << vida << endl;
	cout << "Mana: " << mana << endl;
}
