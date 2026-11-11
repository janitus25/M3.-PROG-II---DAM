#pragma once
#include <stdlib.h>
#include <time.h>

class Rueda{

private:
	float degradacion = 1;

public:
	Rueda();
	Rueda(float degradacion);
	void RestarDegradacion();
	float GetDegradacion();
};

