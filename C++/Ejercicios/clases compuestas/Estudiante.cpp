#include <iostream>
#include "Estudiante.h"
using namespace std;


void Estudiante::mostrarInfo(){
	cout << "Datos generales del alumno:\n" << endl;
	cout << "No Cuenta: " << nroCuenta << endl;
	cout << "Promedio Final: " << promedio << endl;
	cout << "No Expediente: " << expediente.getExpediente() << endl;
	cout << "Direccion: " << dir.getDireccion() << endl;
}
