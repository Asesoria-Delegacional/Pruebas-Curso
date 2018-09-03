/*
Ejercicio 1: Definir una clase Diaanyo con los atributos mes y dia, los metodos igual() y visualizar()
El mes se registra como un valor entero (1. enero, 2.febrero, etc..), El dia del mes se registra en otra
variable entero dia. Escribir un programa que comprueba si la fecha es su dia de cumpleaños.
*/

#include <iostream>
#include "DiaAnio.h"
using namespace std;


int main()
{
	int dia, mes;
	DiaAnio* hoy;
	DiaAnio* cumple;
	
	cout << "Que dia es hoy: "; cin >> dia;
	cout << "Que mes es: ";		cin >> mes;
	hoy = new DiaAnio(dia, mes);
	
	cout << "Que dia es tu cumplenos: "; cin >> dia;
	cout << "Que mes: ";		cin >> mes;
	cumple = new DiaAnio(dia, mes);
	
	if(hoy->igual(*cumple)){
		cout << "Feliz cumpleanos" << endl;
	}else{
		cout << "Feliz dia" << endl;
	}
	hoy->visualizar();
	
	
	return 0;
}
