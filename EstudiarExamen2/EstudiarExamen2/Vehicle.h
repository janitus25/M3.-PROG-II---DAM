#pragma once
#include <iostream>
using namespace std;
#include "string.h"

class Vehicle{

protected:
	string marca = "Default";

public:
	Vehicle(string marca);
	string getMarca();
};

