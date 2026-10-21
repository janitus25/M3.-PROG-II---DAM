#pragma once
#include "Figura.h"

class Cuadrado : public Figura{

private:
	float base, altura;

public:

	//Circulo es el constructor
	Cuadrado(float _base, float _altura, string _nombre) : base(_base), altura(_altura), Figura(_nombre) {};//Los : es como decir es _radio = radio de _radio
	float area() override; //usamos el override para sobreesribit
};

