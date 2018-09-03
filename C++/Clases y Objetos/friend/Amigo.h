#include <iostream>
using namespace std;


class Amigo{
	friend void modificar(Amigo &, int, int);
	private:
		int ataque;
		int defensa;
		
	public:
		Amigo(){
			
		}
		Amigo(int ataque, int defensa){
			this->ataque = ataque;
			this->defensa = defensa;
		}
		void mostrar(){
			cout << "Ataque: " << ataque << endl;
			cout << "Defensa: " << defensa << endl;
		}
};
