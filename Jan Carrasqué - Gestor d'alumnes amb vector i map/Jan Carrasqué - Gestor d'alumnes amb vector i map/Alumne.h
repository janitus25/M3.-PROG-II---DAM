#pragma once
#include <string>
#include <vector>
using namespace std;

class Alumne {

private:
    string nom = "Default";
    int curs = 0;
    vector<float> notes;

public:
    Alumne();
    Alumne(string nom, int curs);

    void AfegirNota(float nota);
    float Mitjana() const;
    void Mostrar() const;
};