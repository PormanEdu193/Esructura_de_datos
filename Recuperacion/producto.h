#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include <string>
#include <fstream>
using std::ifstream;

class producto
{
	private:
	    string nombre;
		int precio;
	public:
		producto();
		~producto();
		void setNombre(string);
		void setPrecio(int);
		string getNombre();
		int getPrecio();
	    
	protected:
		
};

#endif
