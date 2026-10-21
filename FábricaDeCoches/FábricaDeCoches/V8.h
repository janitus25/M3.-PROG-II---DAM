#pragma once
#include "Motor.h"

class V8 : public Motor{

public:

	V8();
	V8(int potencia, int cilindros);
	void Arrancar() override;
};

