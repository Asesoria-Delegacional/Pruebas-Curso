#include <iostream>
using namespace std;

class Tablero{
	
	private:
		int x, y; // coordenadas
		
	public:
		Tablero(int x, int y);
		void moverArriba(int);
		void moverAbajo(int);
		void moverIzquierda(int);
		void moverDerecha(int);
		int getX();
		int getY();
		void coordenadaActual();
	
};
