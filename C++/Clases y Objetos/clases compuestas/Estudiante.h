#include <iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;


class Estudiante{
	
	private:
		int nroCuenta;
		float promedio;
		Expediente exp;
		Direccion dir;
		
	public:
		Estudiante(int nroCuenta, float promedio, int nroExpediente, string direccion)
		:exp(nroExpediente), dir(direccion){
			this->nroCuenta = nroCuenta;
			this->promedio = promedio;
		}
		void mostrar();
};
