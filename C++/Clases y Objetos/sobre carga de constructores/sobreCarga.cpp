#include <iostream>
#include <string.h>
#include "sobreCarga.h"
using namespace std;

void Persona::correr(){
	cout << "Hola me llamo " << nombre << " y tengo " << edad << endl;	
}
void Persona::correr(float km){
	cout << "Hoy corri " << km << " kilometros" << endl;
}
