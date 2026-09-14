#include "juego.h" //El .cpp, es como el que desarrolla las funciones
#include <iostream>
#include <cstring>
using namespace std;
//Al poner delante de las funciones Juego::, el compilador detecta que estas funciones pertenecen a la classe Juego

void Juego::Visualizar_datos_juego() {
    cout << "-----------------------------" << endl;
    cout << "Nombre      : " << nombre << endl;
    cout << "Creador     : " << creador << endl;
    cout << "Lanzamiento : " << lanzamiento << endl;
    cout << "Lenguaje    : " << lenguaje << endl;
    cout << "Precio      : " << precio << " EUR" << endl;
}

// Para modificar el un atributo privado desde fuera de la clase, tenemos que crear una variable, y asiganarle al atributo lanzamiento el nuevo año

void Juego::Modificar_lanzamiento(int anyo) {
    lanzamiento = anyo;
}

void Juego::Hacer_descuento(float desc) {
    precio = precio - (precio * desc / 100);
}

//Es el constructor, su única función es inicializar los atributos privados con los valores recibidos
Juego::Juego(const char* _nombre, const char* _creador, int _lanzamiento, const char* _lenguaje, float _precio) { //He tenido que cambiar los char por const char, porque con char daba error
    strcpy_s(nombre, 30, _nombre); //El strcpy_s, pide que le pasemos 3 valores, y copia el contenido de _nombre dentro de nombre
    strcpy_s(creador, 30, _creador);
    lanzamiento = _lanzamiento;
    strcpy_s(lenguaje, 10, _lenguaje);
    precio = _precio;

    //Las variables que son simples, como int _lanzamiento o _precio, se hacen sin el strcpy_s, porque en ellas se puede asignar el valor directamente con un =
}

void Juego::Modificar_precio(float nuevo_precio) {
    precio = nuevo_precio;
}