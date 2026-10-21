#pragma once
#include "Character.h"

class Mage : public Character{

private:
	int mana = 0;

public:
	Mage(string nombre, int vida, int mana);
	int LanzarHechizo();
	void printMage();
};

