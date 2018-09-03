
#include <iostream>
#include "DiaAnio.h"
using namespace std;



bool DiaAnio::igual(DiaAnio* d){
	return ((d->dia == dia)  && (d->mes == mes)) ? true : false;
}

void DiaAnio::mostrar(){
	cout << "Fecha: " << endl;
	cout << endl << "Dia: " << dia << endl;
	cout << "Mes: " << mes << endl;
}

