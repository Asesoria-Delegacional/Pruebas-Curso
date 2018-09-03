#include <iostream>
#include "Tablero.h"
using namespace std;


Tablero::Tablero(int x, int y){
	this->x = x;
	this->y = y;
}

void Tablero::moverArriba(int m){
	y += m;
}
void Tablero::moverAbajo(int m){
	y -= m;
}
void Tablero::moverDerecha(int m){
	x += m;
}
void Tablero::moverIzquierda(int m){
	x -= m;
}
int Tablero::getX(){
	return x;
}
int Tablero::getY(){
	return y;
}

void Tablero::coordenadaActual(){
	cout << "Actualmente se encuentra en:" << endl;
	cout << "x: " << Tablero::getX() << endl;
	cout << "y: " << Tablero::getY() << endl;
}
