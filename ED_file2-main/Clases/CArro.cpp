#include "CArro.h"

CArro::CArro(){
	setModelo(2023);
	setMarca("Audi");
	setPrecio(5000);
}

CArro::~CArro(){
	cout<<"Estructura Destruida"<<endl;
}

void CArro::imprimir(){
	cout<<"Modelo: "<<getModelo()<<endl;
	cout<<"Marca: "<<getMarca()<<endl;
	cout<<"Precio: "<<getPrecio()<<endl;
	cout<<endl;
}
void CArro::setModelo(int m){
	modelo=m;
}
void CArro::setMarca(string ma){
	marca=ma;
}
void CArro::setPrecio(float p){
	precio=p;
}	 

int CArro::getModelo(){
	return modelo;
}
string CArro::getMarca(){
	return marca;
}
float CArro::getPrecio(){
	return precio;
}

