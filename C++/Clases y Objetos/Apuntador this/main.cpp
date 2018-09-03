#include <iostream>
#include "Persona.h"
using namespace std;



int main() {
	
	// Instanciamos un objeto de la clase Persona
	Persona persona("Pedro", 58); // Objeto estático
	Persona* personita = new Persona("Rogelio", 56);
	
	persona.mostrarDatos();
	personita->mostrarDatos();
	cout << "\nUsando retorno de objetos con this" << endl;
	
//	persona.setDatos("Juan Manuel", 23).mostrarDatos();
	personita->setDatos("Paola Casas", 21).mostrarDatos();
	
	return 0;
}
