#pragma once // #pragma once evita que este fichero se incluya más de una vez en la misma

//El fichero .h, es como el que crea la funcion

//En este fichero, se definen los atributos y metodos de la classe, pero no como funcionan por dentro esos metodos
class Juego{
private: // Atributos solo accesibles desde dentro de la propia classe
    char  nombre[30];
    char  creador[30];
    int   lanzamiento;
    char  lenguaje[10];
    float precio;

public:
    Juego(const char* _nombre, const char* _creador, int _lanzamiento, const char* _lenguaje, float _precio); //Este es el consutructor, solo tiene un trabajo: coger los valores que le pasan por parámetro y guardarlos en los atributos del objeto que se está creando.
    void Visualizar_datos_juego();
    void Modificar_lanzamiento(int anyo);
    void Hacer_descuento(float desc);
    void Modificar_precio(float nuevo_precio);
};

