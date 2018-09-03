#include <iostream>
#include <string.h>
#include "Perro.h"

using namespace std;

void Perro::mostrarDatos(){
	cout << "Datos generales:\n" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
}
void Perro::jugar(){
	cout << "El perrito " << nombre << " esta jugando" << endl;
}
