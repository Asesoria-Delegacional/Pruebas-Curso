#include <string.h>
using namespace std;

class Persona{
	
	private:
		string nombre;
		string dni;
		int edad;
		float km;
	
	public:
		Persona(){ // Constructor 1
			nombre = "Sin nombre";
			dni = "Sin DNI";
			edad = 1;
			km = 0;
		}
		Persona(string _nombre, int _edad, float _km){
			nombre = _nombre;
			edad = _edad;
			km = _km;
		}
		void correr();
		void correr(float km);
};
