#include <iostream>
#include "Tablero.h"
using namespace std;

int main()
{
	int mov, x, y, opc;
	Tablero* jugador;
	
	cout << "En que posicion desea iniciar (x, y): ";	cin >> x >> y;
	jugador = new Tablero(x, y);
	jugador->coordenadaActual();
	
	do{
		system("cls");
		cout << "1. Mover Arriba" << endl;
		cout << "2. Mover Abajo" << endl;
		cout << "3. Mover Derecha" << endl;
		cout << "4. Mover Izquierda" << endl;
		cout << "5. Salir" << endl;
		cout << "\nMovimiento: ";	cin >> opc;
		
		if(opc < 5 && opc > 0){
			cout << "Cuantas posiciones desea avanzar: ";	cin >> mov;
		}
		switch(opc){
			
			case 1: system("cls");
				jugador->moverArriba(mov);
			break;
			
			case 2: system("cls");
				jugador->moverAbajo(mov);
			break;
			
			case 3: system("cls");
				jugador->moverDerecha(mov);
			break;
			
			case 4: system("cls");
				jugador->moverIzquierda(mov);
			break;
				
			default: 
				cout << "Opcion no valida" << endl;
			break;
		} // fin de switch
		// Mostramos la posion actual
		jugador->coordenadaActual();
		system("pause");
	}while(opc < 5);
	
	return 0;
}

