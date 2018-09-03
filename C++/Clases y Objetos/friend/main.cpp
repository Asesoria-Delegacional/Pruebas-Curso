#include <iostream>
#include "Amigo.h"
using namespace std;


// Función global
void modificar(Amigo &personaje, int atack, int defense){
	personaje.ataque = atack;
	personaje.defensa = defense;
}
int main(int argc, char** argv) {
	Amigo* personaje = new Amigo(100, 70);
	
	personaje->mostrar();
	
	modificar(*personaje, 90, 90);
	personaje->mostrar();
	
	
	
	return 0;
}
