#include "V8.h"

V8::V8(){
	potencia = 400;
	cilindros = 8;
}

V8::V8(int potencia, int cilindros) : Motor(potencia, cilindros){

}

void V8::Arrancar(){
	cout << "Arrancando V8:ROOOOARRR" << endl;
}
