

class Expediente{
	
	private:
		int nroExpediente;
		
	public:
		Expediente(){ // Constructo predeterminado
		}
		Expediente(int nroExpediente){
			this->nroExpediente = nroExpediente;
		}
		~Expediente(){ // Destructor
			
		}
		int getExpediente(){
			return nroExpediente;
		}
};
