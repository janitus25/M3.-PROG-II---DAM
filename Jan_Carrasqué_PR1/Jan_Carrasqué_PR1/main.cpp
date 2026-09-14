#include <iostream>
#include <cstring>
using namespace std;
#include "juego.h" //incluimos el Juego.h para poder usar sus metodos

int main() {

    Juego j("Doom", "id Software", 1993, "C", 20.0f); //Creamos un objeto llamado "j" de tipo Juego, llamando al constructor con los 5 datos iniciales.
    j.Visualizar_datos_juego(); //Visualizamos los datos del juego
    j.Hacer_descuento(25); //Aplicamos un 25% de descuento
    j.Modificar_lanzamiento(1994); //Cambiamos el año de lanzamiento

    j.Visualizar_datos_juego();

    j.Modificar_lanzamiento(1978);
    j.Modificar_precio(-300); //Modificamos el precio
    j.Visualizar_datos_juego();

    return 0;
}