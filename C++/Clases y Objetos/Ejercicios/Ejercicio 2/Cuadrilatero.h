#include <iostream>
using namespace std;


class Cuadrilatero{  // TAD
	
	private:
		float area;
		float perimetro;
		float lon_1, lon_2;
		
	public:
	//	constructores()
	Cuadrilatero(float lon_1){ // cuadrado o rombo
		this->lon_1 = lon_1;
		this->lon_2 = lon_1;
	}
	
	Cuadrilatero(float lon_1, float lon_2){ // rectangulo/rombiode
		this->lon_1 = lon_1;
		this->lon_2 = lon_2;
	}
	float getPerimetro();
	float getArea();
};
