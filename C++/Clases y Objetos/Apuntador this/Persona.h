#include <string.h>
using namespace std;


class Persona{
	
	private: // Atributos
		string nombre;
		int edad;
		
	public: // Métodos
		Persona(string nombre, int edad){
			this->nombre = nombre;
			this->edad = edad;
		}
		Persona &setDatos(string nombre, int edad);
		Persona &mostrarDatos();
};
