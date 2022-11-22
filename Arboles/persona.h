#ifndef PERSONA_H
#define PERSONA_H
#include<string>
using std::string;


class persona 
{
	private:
		string nombre;
		char sexo;
		int edad;
	public:
		persona();
		~persona();
		void setNombre(string);
		void setEdad(int);
		void setSexo(char);
		string getNombre();
		char getSexo();
		int getEdad;
		void imprimir();
	protected:
};

#endif
