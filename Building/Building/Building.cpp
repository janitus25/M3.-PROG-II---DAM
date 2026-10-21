#include "Building.h"

Building::Building(){

	nombre = "Default";

}

Building::Building(string nombre){

	this->nombre = nombre;

}

string Building::getName()
{
	return nombre;
}
