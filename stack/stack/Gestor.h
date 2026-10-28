#pragma once
#include "Impostor.h"
#include <vector>
#include "objInteractuable.h"

class Gestor{

private:
	Character* characters[3];
	objInteractuable obj[3];

public:
	Gestor();
	float GetPosPlayerX(int i);
	float GetPosPlayerY(int i);
	float GetPosObjectX(int i);
	float GetPosObjectY(int i);
};

