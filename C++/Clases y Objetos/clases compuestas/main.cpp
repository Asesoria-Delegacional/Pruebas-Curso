#include <iostream>
#include <string.h>
#include "Estudiante.h"
using namespace std;

int main() {
	
	int nroCuenta, nroExpediente;
	float promedio;
	string direccion;
	
	Estudiante* estudiante;
	
	fflush(stdin);
	cout << "Cuenta: ";		cin >> nroCuenta;
	cout << "Promedio: ";	cin >> promedio;
	cout << "Expediente: "; cin >> nroExpediente;fflush(stdin);
	cout << "Direccion: ";	getline(cin, direccion);
	
	estudiante = new Estudiante(nroCuenta, promedio, nroExpediente, direccion);
	
	system("cls");
	cout << "\n----------- Informacion de alumno: \n" << endl;
	estudiante->mostrar();
	
	return 0;
}
