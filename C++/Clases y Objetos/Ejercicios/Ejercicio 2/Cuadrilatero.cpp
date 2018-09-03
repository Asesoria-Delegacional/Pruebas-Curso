#include <iostream>
#include "Cuadrilatero.h"
using namespace std;


float Cuadrilatero::getPerimetro(){
	perimetro = 2*(lon_1 + lon_2);
	return perimetro;
}


float Cuadrilatero::getArea(){
	area = (lon_1 * lon_2);
	return area;
}



