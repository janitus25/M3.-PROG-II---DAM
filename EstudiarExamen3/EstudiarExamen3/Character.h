#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character{

protected:
	string nombre = "Default";
	int vida = 0;

public:
	Character(string nombre, int vida);
	string getName();
	int getVida();
	void RecibirDanyo(int d);
	bool EstaVivo();

};

