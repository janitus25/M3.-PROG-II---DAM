#pragma once
#include <iostream>
#include "Gestor.h"
using namespace std;

class Character{
protected:
	float position[2];
	bool state = true;
	string name = "";
	
	Gestor *gestor = NULL;

public:
	Character();
	Character(float position[2], string name);
	virtual void Interact();
	virtual void Ability();
	void MoveX(float pos);
	void MoveY(float pos);

	float GetX();
	float GetY();

	void SetGestor(Gestor *gestor);
};

