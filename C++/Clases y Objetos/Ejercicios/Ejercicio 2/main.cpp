#include <iostream>
#include "Cuadrilatero.h"
using namespace std;


int main()
{
	Cuadrilatero* figura;
	float lado_1, lado_2;
	
	cout << "Lado 1: ";		cin >> lado_1;
	cout << "Lado 2: ";		cin >> lado_2;
	
	if(lado_1 == lado_2){ // es un cuadrado
		figura = new Cuadrilatero(lado_1);
	}else{
		figura = new Cuadrilatero(lado_1, lado_2);
	}
	
	cout << "El perimetro es: " << figura->getPerimetro() << endl;
	cout << "El area es: " << figura->getArea() << endl;
	
	return 0;
}
