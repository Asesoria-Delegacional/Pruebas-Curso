#include <iostream>
#include "Estatico.h"
using namespace std;



int main() {
	
	Estatico* obj1 = new Estatico();
	Estatico* obj2 = new Estatico();
	
	cout << "Objeto 1: " << obj1->getContador() << endl;
	cout << "Objeto 2: " << obj2->getContador() << endl;
	
	
	cout << "La suma es: " << Estatico::suma() << endl;
	cout << "La suma es: " << Estatico::suma() << endl;
	cout << "La suma es: " << Estatico::suma() << endl;
	
	return 0;
}
