#pragma once
#include <iostream>
using namespace std;

class Arma{

protected: //Usamos protected para que lo hereden las hijas, sin eso no hereda
	int municion=0, municionMax=0, danyoPorBala = 0;
	string nombre = "Default";

public: //Mis clases hijas haran un override y cada una de su forma, y si no lo hacen haran la por defecto de la area
	Arma(); //Siempre hacer 2 constructores, uno por omision y otro por parametros
	Arma(int municionMax, string nombre, int danyoPorBala);
	//Minimo un virtual
	virtual void Disparar();
	string GetName();
	int GetDamage();
	
};

