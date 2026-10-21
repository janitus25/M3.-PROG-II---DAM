#pragma once
#include "Figura.h"
class Circulo : public Figura{ //Herencia de la classe figura

private:
	float radio;

public:

	//Circulo es el constructor
	Circulo(float _radio, string _nombre) : radio(_radio), Figura(_nombre) {};//Los : es como decir es _radio = radio de _radio
	float area() override; //Lo hacemos constante
};

