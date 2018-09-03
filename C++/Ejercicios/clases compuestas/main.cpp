#include <iostream>
#include "Estudiante.h"
using namespace std;

int main() {
	
	Estudiante* juan = new Estudiante(1776, 9.2, 7, "Cda. Jorge M Pullman Mz-45 Lt-9");
	
	juan->mostrarInfo();
	
	return 0;
}
