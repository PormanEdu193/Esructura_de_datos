#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include <string>;
using std::string;
using std::cout;
using std::endl;

class CArro
{
	private:
      int modelo;
      string marca;
      float precio;
    public:
	  CArro();
	  ~CArro();
	  void setModelo(int);
	  void setMarca(string);
	  void setPrecio(float);
	  
	  int getModelo();
	  string getMarca();
	  float getPrecio();
	  
	  void imprimir();
	  
	protected:
};

#endif
