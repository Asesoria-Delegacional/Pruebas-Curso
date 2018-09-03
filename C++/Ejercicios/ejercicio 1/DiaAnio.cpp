#include <iostream>
#include "DiaAnio.h"
using namespace std;


bool DiaAnio::igual(DiaAnio &d){ // accede a la posicion de memoria de tipo objeto
	
	if((d.dia == dia/*Dia = miembro de daot*/) && (d.mes == mes)){
		return true;
	}else{
		return false;
	}
	
}

void DiaAnio::visualizar(){
	cout << "Mostrando los dato: " << endl;
	cout << "Mes: " << mes << endl;
	cout << "Dia: " << dia << endl;
	
}
