#include <iostream>
#include <cstring>
using namespace std;
#include "juego.h" //incluimos el Juego.h para poder usar sus metodos

int main() {

    Juego j("Doom", "id Software", 1993, "C", 20.0f); //Creamos un objeto llamado "j" de tipo Juego, llamando al constructor con los 5 datos iniciales.
    j.VisualizarDatosJuego(); //Visualizamos los datos del juego
    j.HacerDescuento(25); //Aplicamos un 25% de descuento
    j.ModificarLanzamiento(1994); //Cambiamos el año de lanzamiento

    j.VisualizarDatosJuego();

    j.ModificarLanzamiento(1978);
    j.ModificarPrecio(-300); //Modificamos el precio
    j.VisualizarDatosJuego();

    return 0;
}