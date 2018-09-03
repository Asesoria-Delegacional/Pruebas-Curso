#include <string.h>

class Perro{
	
	private: // Atributos
		std::string nombre, raza;
		
	public: // Metodos
		Perro(std::string _nombre, std::string _raza){ // Metodo constructor
			nombre = _nombre;
			raza = _raza;
		}
		
		// Creando un destructor de objetos
		~Perro(/*Caracteristica: no contiene ningun parametro*/){
			// Destructor para objetos dinámicos
		}
		
		void mostrarDatos();
		void jugar();
};
