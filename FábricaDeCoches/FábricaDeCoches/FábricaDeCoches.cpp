#include "V4.h"
#include "V8.h"
#include "Rueda.h"
#include "Motor.h"
#include "Coche.h"
#include "CajaCambios.h"
#include "Amortiguador.h"

int main(){
    V4 v4;
    V8 v8;
    Coche c1("Mini", &v4);
    Coche c2("Ferrari", &v8);

    c1.Arrancar();
    c2.Arrancar();
    cout << c1.Acelerar() << endl;
    cout << c1.Acelerar() << endl;
    cout << c2.Acelerar() << endl;
    c1.InflarRuedas(3);
    c1.PrintCoche();
    c2.Bache(8);
}
