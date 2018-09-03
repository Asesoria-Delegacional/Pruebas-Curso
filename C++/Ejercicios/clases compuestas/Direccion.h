
#include <iostream>
using namespace std;

class Direccion{
	
	private:
		string direccion;
		
	public:
		Direccion(){ // constructor predeterminado
			
		}
		Direccion(string direccion){
			this->direccion = direccion;
		}
		~Direccion(){ // Destructor
			
		}
		string getDireccion(){
			return direccion;
		}
};
