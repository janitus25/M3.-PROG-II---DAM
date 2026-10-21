#pragma once
#include <iostream>
using namespace std;

class Figura{
protected:
	string nombre;
	float areaTotal;

public:
	Figura(string _nombre) :nombre(_nombre) { cout << "Constructr¡ir Padre llamado\n"; };
	virtual float area()const { return 0; };
	float GetArea() const;
};

