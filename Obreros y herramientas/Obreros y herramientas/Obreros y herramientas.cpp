#include "Herramienta.h"
#include "Martillo.h"
#include "Herramienta.h"
#include "Taladro.h"
#include "Obrero.h"

int main(){
    Martillo m;
    Taladro t;
    Obrero o1("Pepe", &m);
    Obrero o2("Ana", &t);
    int d[2] = { 3, 4 };

    o1.Moverse(d);
    o1.Trabajar();
    o2.Trabajar();
    o1.Cansarse(o2.GetHerramienta());
    o2.Cansarse(o1.GetHerramienta());
}
