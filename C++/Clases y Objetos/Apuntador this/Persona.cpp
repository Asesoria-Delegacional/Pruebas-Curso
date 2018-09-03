#include <iostream>
#include <string.h>
#include "Persona.h"
using namespace std;

Persona &Persona::setDatos(string nombre, int edad){
	this->nombre = nombre;
	this->edad = edad;
	return *this;
}
Persona &Persona::mostrarDatos(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	return *this; // retornamos el objeto con operador de indirección (retornamos solo valores no su referencia)
}

