#include <iostream>
#include <string.h>
#include "sobreCarga.h"
using namespace std;


int main() {
	
	Persona* per = new Persona();
	per->correr();
	
	Persona* per2 = new Persona("juan manuel", 23, 2.3);
	per2->correr();
	per2->correr(2.4);
	
	
	return 0;
}
