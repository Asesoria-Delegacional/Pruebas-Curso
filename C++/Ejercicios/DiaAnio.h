

class DiaAnio{
	//	Atributos (encapulacion)
	private:
		int dia, mes;
	
	// M�todos	(acceso publico)	
	public: // prototipo de funciones miembro
	DiaAnio(int _dia, int _mes){
		dia = _dia;
		mes = _mes;
	}
	bool igual(DiaAnio*);
	void mostrar();
};
