#pragma once
#include <iostream>
using namespace std;

class Motor{

protected:
	int potencia, cilindros;

public:
	Motor();
	Motor(int potencia, int cilindros);
	virtual void Arrancar();
	int GetPotencia();
};

