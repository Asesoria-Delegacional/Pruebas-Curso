#include <iostream>
#include "Estatico.h"
using namespace std;



// Inicializando miembos static
int Estatico::contador = 0;
int Estatico::a = 1;
int Estatico::b = 0;

int Estatico::getContador(){
	return contador;
}

