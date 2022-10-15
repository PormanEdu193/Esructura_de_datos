#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

class producto
{
private:
    string nombre;
    int precio;
public:
    producto();
    producto(string,int);
    ~producto();
    int getPrecio();
    string getNombre();
    void setPrecio(int);
    void setNombre(string);
    void imprimir();
};

#endif


