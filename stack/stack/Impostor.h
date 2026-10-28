#pragma once
#include "Character.h"
class Impostor : public Character {

public:
	Impostor();
	Impostor(float position[2], string name);
	void Ability() override;
	void Interact() override;
	void Sabotage();
};

