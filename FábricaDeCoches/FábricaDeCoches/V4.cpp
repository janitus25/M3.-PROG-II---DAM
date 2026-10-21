#include "V4.h"

V4::V4(){

	potencia = 100;
	cilindros = 4;

}

V4::V4(int potencia, int cilindros) : Motor(potencia, cilindros) {


}

void V4::Arrancar(){
	cout << "Arrancando V4 ron ron" << endl;
}


