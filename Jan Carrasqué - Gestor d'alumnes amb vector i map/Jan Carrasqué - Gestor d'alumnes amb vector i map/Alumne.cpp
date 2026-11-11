#include "Alumne.h"
#include <iostream>

Alumne::Alumne() {
    nom = "Default";
    curs = 0;
}

Alumne::Alumne(string nom, int curs) {
    this->nom = nom;
    this->curs = curs;
}

void Alumne::AfegirNota(float nota) {
    notes.push_back(nota); // Afegim la nota al final del vector
}

float Alumne::Mitjana() const {

    if (notes.empty()) { // Comprovem si el vector esta buit
        return 0;
    }

    float mitjana = 0;

    for (int i = 0; i < notes.size(); i++) {
        mitjana += notes[i];
    }

    mitjana /= notes.size();

    return mitjana;
}

void Alumne::Mostrar() const {

    cout << "Nom: " << nom << endl;
    cout << "Curs: " << curs << endl;

    cout << "Notes: ";

    if (notes.empty()) {
        cout << "Encara no hi ha notes.";
    }
    else {
        for (int i = 0; i < notes.size(); i++) {
            cout << notes[i] << " ";
        }
    }

    cout << endl;
}