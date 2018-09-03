#include <iostream>
using namespace std;


class Estatico{
	
	private:
		static int contador;
		static int a;
		static int b;
		
	public:
		Estatico(){ // Cada vez que se cree un objeto se incrementara en uno el contador
			contador++;
		}
		int getContador();
		
		static int suma(){
			a += b;
			b = a - b;
			return a;
		}
		
};
