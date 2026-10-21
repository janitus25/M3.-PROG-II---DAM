#pragma once
#include <iostream>
#include <string>
using namespace std;

class Building{

protected:
	string nombre;

public:
	Building(string _name) : nombre(_name) {};
	string getName();

};

