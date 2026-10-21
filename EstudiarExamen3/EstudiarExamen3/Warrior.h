#pragma once
#include "Character.h"
#include "Weapon.h"


class Warrior : public Character{

private:
	int fuerza = 0;
	Weapon arma;

public:
	Warrior(string nombre, int vida, int fuerza);
	int Atacar();
	void printWarrior();

};

