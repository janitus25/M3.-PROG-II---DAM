#include "Alumne.h"
#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, Alumne> alumnes;

    int opcio;
    int id = 0, curs = 0;
    string nom = "Default";
    float nota;

    do {

        cout << "\n--- MENU ---" << endl;
        cout << "1. Afegir alumne" << endl;
        cout << "2. Afegir nota" << endl;
        cout << "3. Veure mitjana" << endl;
        cout << "4. Llistar alumnes" << endl;
        cout << "0. Sortir" << endl;

        cout << "Selecciona una opcio: ";
        cin >> opcio;
        cin.ignore(10000, '\n'); // Netegem el salt de linia perque getline funcioni be

        switch (opcio) {

        case 1:

            cout << "Insereix el seu ID: ";
            cin >> id;
            cin.ignore(10000, '\n'); // Netegem el salt de linia perque getline funcioni be

            if (alumnes.count(id) == 0) {

                cout << "Introdueix el nom de l'alumne: ";
                getline(cin, nom); // Admet noms amb espais

                do {
                    cout << "Insereix el seu curs (1 o 2): ";
                    cin >> curs;

                    if (curs < 1 || curs > 2) {
                        cout << "El curs ha de ser 1 o 2!" << endl;
                    }

                } while (curs < 1 || curs > 2);

                alumnes.insert({ id, Alumne(nom, curs) });
                cout << "Alumne afegit correctament!" << endl;
            }
            else {
                cout << "Aquest ID ja existeix!" << endl;
            }

            break;

        case 2:

            cout << "Introdueix l'ID de l'alumne: ";
            cin >> id;

            if (alumnes.count(id) == 1) {

                do {
                    cout << "Introdueix la nota (0 - 10): ";
                    cin >> nota;

                    if (nota < 0 || nota > 10) {
                        cout << "La nota ha d'estar entre 0 i 10!" << endl;
                    }
                } while (nota < 0 || nota > 10);

                alumnes[id].AfegirNota(nota);
                cout << "Nota afegida correctament!" << endl;

            }
            else {
                cout << "Aquest alumne no existeix!" << endl;
            }

            break;

        case 3:

            cout << "Introdueix l'ID per calcular la mitjana: ";
            cin >> id;

            if (alumnes.count(id) == 1) {
                cout << "La mitjana es: "
                    << alumnes[id].Mitjana() << endl;
            }
            else {
                cout << "Aquest alumne no existeix!" << endl;
            }

            break;

        case 4:

            if (alumnes.empty()) {
                cout << "No hi ha alumnes registrats!" << endl;
            }
            else {
                for (auto& parella : alumnes) {
                    cout << "\nID: " << parella.first << endl;
                    parella.second.Mostrar();
                }
            }

            break;

        case 0:

            cout << "Sortint del programa..." << endl;
            break;

        default:

            cout << "Opcio no valida!" << endl;
            break;
        }

    } while (opcio != 0);

    return 0;
}