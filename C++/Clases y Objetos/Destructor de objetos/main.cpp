#include <iostream>
#include "Perro.h"
using namespace std;

int main() {
	
	Perro* perro = new Perro("Mimi", "Tayler");  // Objeto dinámico
	Perro perrito("Tommy", "Terry");			 // Objeto estático
	
	perrito.mostrarDatos();
	perrito.jugar();
	perrito.~Perro(); // destruyendo objeto de tipo estático
	
	cout << "\n------------ Objetos dinamicos--------------\n" << endl;
	
	perro->mostrarDatos();
	perro->jugar();
	
	delete perro; // destruyendo objetos de tipo dinámico
	
//	perro->jugar();
	
	return 0;
}
