#include <iostream>
#include "DiaAnio.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dia, mes;	// Variables para almacenar los datos por el usuario
	DiaAnio* currentDate;  // Puntero a objeto
	DiaAnio* birthday;		// Puntero a objeto
	
	fflush(stdin);
	cout << "Fecha actual (dia | mes)?: ";			cin >> dia >> mes;
	currentDate = new DiaAnio(dia, mes); // Objeto dinámico
	
	cout << "Fecha de nacimiento (dia | mes)?: ";	cin >> dia >> mes;
	birthday = new DiaAnio(dia, mes);
	
	if(currentDate->igual(birthday)){
		cout << "Feliz cumpleanos prro" << endl;
	}else{
		cout << "Feliz dia imbecil" << endl;
	}
	
	return 0;
}
