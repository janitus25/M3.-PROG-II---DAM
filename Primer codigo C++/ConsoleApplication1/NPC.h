#pragma once
#include <iostream>
using namespace std;

class NPC{
private:
	string nombre;
	int edad;
	int dialgoPos;
	string textos[10];

public:
	void MostrarDatos();
	void IntroducirDatos(string _nombre, int _edad, int _dialogoPos, string _textos[]);
};

