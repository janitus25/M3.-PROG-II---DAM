#include <iostream>
using namespace std;

void SumaX(int* p, int n, int x);
void RestaX(int* p, int n, int x);
void MinimX(int* p, int n);
void MostrarArray(int* p, int n);

int main(){
	
	int medidaArray = 0, numero=0;

	do{
		cout << "Introduce la medida que quieres para el array (Debe ser mayor a 0): ";
		cin >> medidaArray;
	
	} while (medidaArray<=0);
	
	int* v = new int[medidaArray];

	cout << "\nIntroduce los valores del array:\n";
	for (int i = 0; i < medidaArray; i++) {
		cin >> *(v + i);
	}
	
	cout << "Introduce un valor: ";
	cin >> numero;

	cout << "Array antes: \n";
	MostrarArray(v, medidaArray);
	
	SumaX(v,medidaArray,numero);
	cout << "Array despues de SumaX: \n";
	MostrarArray(v, medidaArray);

	RestaX(v, medidaArray, numero);
	cout << "Array despues de RestaX: \n";
	MostrarArray(v, medidaArray);
	
	cout << "Valor minimo: " << endl;
	MinimX(v, medidaArray);

	delete[] v; //Se pone el nombre del puntero sin la *
	v = nullptr;
	
}

	void SumaX(int* p, int n, int x) {
		
		for (int i = 0; i < n; i++) {
			*(p + i) += x;
		}
	}

	void RestaX(int* p, int n, int x) {

		for (int i = 0; i < n; i++) {
			*(p + i) -= x;
		}
	}

	void MinimX(int* p, int n) {
		
		int temp = *p;
		
		for (int i = 1; i < n; i++) {

			if (*(p + i) < temp) {
				temp = *(p + i);
			}
		}

		cout << temp<<endl;
		
	}

	void MostrarArray(int* p, int n) {
		
		for (int i = 0; i < n; i++) {
			cout << *(p + i) << " ";
		}
		cout << endl;
	}
