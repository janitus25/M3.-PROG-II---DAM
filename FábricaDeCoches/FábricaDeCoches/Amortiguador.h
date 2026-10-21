#pragma once
class Amortiguador{

private:
	int dureza;

public:
	Amortiguador();
	Amortiguador(int dureza);
	int Absorber(int golpe);
};

