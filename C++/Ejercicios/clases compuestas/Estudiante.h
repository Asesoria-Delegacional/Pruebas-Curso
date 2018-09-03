#include <iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;


class Estudiante{
	
	private:
		int nroCuenta;
		float promedio;
		Expediente expediente;
		Direccion dir;
		
	public:
		Estudiante(){
			
		}
		Estudiante(int nroCuenta, float promedio, int nroExpediente, string direccion)
		: expediente(nroExpediente), dir(direccion){
			this->nroCuenta = nroCuenta;
			this->promedio = promedio;
		}
		
		void mostrarInfo();
};
