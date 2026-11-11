#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

void IngresarAlumnos(map<string, vector <double>> *notes);
void IngresarNotas(vector <double> * alumne);

int main(){
   
	map<string, vector <double>> notes;
	
	IngresarAlumnos(&notes);

	for (auto& m : notes) {
		IngresarNotas(&n.second);
	}

}

void IngresarAlumnos(map<string, vector<double>>* notes){

	int numAlumnos = 0;

	cout<<"Dime cuantos alumnos tienes?\n";
	cin >> numAlumnos;

	string nombre;

	for (int i = 0; i < numAlumnos; i++) {
		cout << "Nombre: ";
		cin >> nombre;
		(*notes)[nombre] = vector<double>(); //
	}
}

void IngresarNotas(vector<double>* alumne){

	

	cout << "Dime cuantas notas tienes?\n";
	int notas = 0;
	cin >> notas;
	int valor;

	for (int i = 0; i < notas; i++) {
		
		cout << "Dime su nota: \n";
		cin >> valor;
		(*alumne).push_back(valor);
	}

}
