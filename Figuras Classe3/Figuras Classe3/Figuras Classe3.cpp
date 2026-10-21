#include <iostream>
#include "Circulo.h"
#include "Figura.h"
#include "Cuadrado.h"

using namespace std;

int main(){

    Figura figuras[3] = {Circulo(13,"Circulo1"), Cuadrado(5,4, "Cuadrado1"), Circulo(1,"Circulo2")};

    for (int i = 0; i < 3; i++) {
        figuras[i].area();
        cout << "La area es: " << figuras[i].GetArea();
    }
}
