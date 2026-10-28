#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

//Ejercicio1
void Ejercicio1();
void ImprimirValores(vector<int> v);

//Ejercicio2
void Ejercicio2();
void InsertarNombres(vector<string>& v);
void EliminarCiudad(vector<string>& v);
void ImprimirVector(vector<string>& v);

//Ejercicio3
void Ejercicio3();
void MultiplicarVector(vector<int>& v2);
void ImprimirVector(vector<int> v2);

//Ejercicio4
void Ejercicio4();
void IntroducirDatos(vector<int>& v3);
void OrdenarVector(vector<int>& v3);
void ImprimirResultado(vector<int>v3);

//Ejercicio5
void Ejercicio5();
void IntroducirDatos(vector<string>& words);
void BuscarPalabra(const vector<string>& words, const string& palabra);

int main() {
    //Ejercicio1();
    //Ejercicio2();
    //Ejercicio3();
    //Ejercicio4();
    Ejercicio5();
    return 0;
}

//Ejercicio1
void Ejercicio1() {
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    ImprimirValores(v1);
}
void ImprimirValores(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\n";
}

//Ejercicio2
void Ejercicio2() {
    vector<string> ciudades;

    InsertarNombres(ciudades);
    EliminarCiudad(ciudades);
    ImprimirVector(ciudades);
}
void InsertarNombres(vector<string>& v) {
    v.push_back("Terrassa,");
    v.push_back("Sabadell,");
    v.push_back("Barcelona,");
    v.push_back("Reus");
    v.push_back("Rubí");
}
void EliminarCiudad(vector<string>& v) {
    v.pop_back();
}
void ImprimirVector(vector<string>& v) {

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

//Ejercicio3
void Ejercicio3() {

    vector <int> v2 = {1,2,3,4,5};

    MultiplicarVector(v2);
    ImprimirVector(v2);
}
void MultiplicarVector(vector<int>& v2) { //El & es para darle la variable original

    for (int i = 0; i < v2.size(); i++) {
        v2[i] *= 2;
   }

}
void ImprimirVector(vector<int> v2) {

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    cout << "\n";

}

//Ejercicio4
void Ejercicio4() {
    vector <int> v3;

    IntroducirDatos(v3);
    OrdenarVector(v3);
    ImprimirResultado(v3);
}
void IntroducirDatos(vector<int>& v3) {

    int numero = 0;

    cout << "Introduce 5 numeros:\n";

    for (int i = 0; i < 5; i++) {
        cin >> numero;
        v3.push_back(numero);
    }
}
void OrdenarVector(vector<int>& v3) {
    sort(v3.begin(), v3.end()); //Simplemente esto ordena el vector
}
void ImprimirResultado(vector<int>v3) {

    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    cout << "\n";
}

//Ejercicio5
void Ejercicio5() {
    vector<string> words;
    string palabra;

    IntroducirDatos(words);

    cout << "Palabra a buscar: ";
    cin >> palabra;

    BuscarPalabra(words, palabra);
}
void IntroducirDatos(vector<string>& words) {
    string linea;
    string palabra;

    cout << "Introduce las palabras separadas por espacio:\n";
    getline(cin, linea);

    istringstream iss(linea); //Lee desde el string linea en lugar de hacerlo desde el teclado. Se usa igual que cin.
    while (iss >> palabra) { //extrae la siguiente palabra del flujo, ignorando los espacios en blanco, y la guarda en palabra
        words.push_back(palabra);//Añade cada palabra extraída al final del vector.
    }
}
void BuscarPalabra(const vector<string>& words, const string& palabra) {
    int contador = 0;

    for (int i = 0; i < words.size(); i++) {
        if (words[i] == palabra) {
            contador++;
        }
    }

    cout << "La palabra \"" << palabra << "\" aparece " << contador << " veces.\n";
}