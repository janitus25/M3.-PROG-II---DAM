#pragma once
#include "Motor.h"

class V4 : public Motor{

public:
	V4();
	V4(int potencia, int cilindros);
	void Arrancar() override;

};

