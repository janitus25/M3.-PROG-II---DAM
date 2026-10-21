#pragma once
class Cambio{

private:
	int marcha = 0;

public:
	Cambio();
	Cambio(int marcha);
	void SubirMarcha();
	void BajarMarcha();
	int GetMarcha();
};

