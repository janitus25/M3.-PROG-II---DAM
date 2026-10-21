#include "Moto.h"
#include "Coche.h"
#include "Vehiculo.h"
#include "Cambio.h"
#include "Freno.h"
#include "Rueda.h"


int main(){
    
    Coche coche("Seat", 100);
    Moto moto("Yamaha", 80);

    coche.Arrancar();
    moto.Arrancar();

    coche.Acelerar();
    coche.Acelerar();
    coche.MostrarInfo();
    coche.InflarRuedas(5);
    coche.MostrarInfo();
    coche.Frenar(100);

    moto.HacerCaballito();
}
