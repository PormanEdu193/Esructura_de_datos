#include "producto.h"

producto::producto()
{
    setPrecio(0);
    setNombre("NN");
}
producto::producto(string nom, int pre)
{
    setPrecio(pre);
    setNombre(nom);
}
producto::~producto()
{
    ;
}

int producto::getPrecio(){
    return precio;
}

string producto::getNombre(){
    return nombre;
}

void producto::setPrecio(int p){
    precio=p;
}
void producto::setNombre(string n){
    nombre=n;
}
void producto::imprimir(){
    cout<<getNombre()<<" "<<getPrecio()<<endl;
}