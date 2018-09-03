#include <iostream>
#include "Perro.h"
using namespace std;

int main() {
	
	Perro* perro = new Perro("Mimi", "Tayler");  // Objeto din�mico
	Perro perrito("Tommy", "Terry");			 // Objeto est�tico
	
	perrito.mostrarDatos();
	perrito.jugar();
	perrito.~Perro(); // destruyendo objeto de tipo est�tico
	
	cout << "\n------------ Objetos dinamicos--------------\n" << endl;
	
	perro->mostrarDatos();
	perro->jugar();
	
	delete perro; // destruyendo objetos de tipo din�mico
	
//	perro->jugar();
	
	return 0;
}
