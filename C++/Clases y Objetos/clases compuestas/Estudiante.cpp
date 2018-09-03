#include <iostream>
#include "Estudiante.h"
using namespace std;

void Estudiante::mostrar(){
	cout << "No Cuenta: " << nroCuenta << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "No Expediente: " << exp.getExpediente() << endl;
	cout << "Direccion: " << dir.getDireccion() << endl;
}
