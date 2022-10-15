#include "lista.h"

lista::lista()
{
	setPrimerPtr(0);
	setUltimoPtr(0);
}

lista::~lista()
{
	;
}

void lista::setPrimerPtr(nodo* p){
	primerPtr = p;
}
void lista::setUltimoPtr(nodo* u){
	ultimoPtr = u;
}
nodo* lista::getPrimerPtr(){
	return primerPtr;
}
nodo* lista::getUltimoPtr(){
	return ultimoPtr;
}

void lista::imprimir(){
	cout<<"primerPtr = "<<getPrimerPtr()<<endl;
	cout<<"ultimoPtr = "<<getUltimoPtr()<<endl;
}

void lista::insertarFinal(producto a){
	nodo* temp = new nodo(a);
	if(getUltimoPtr() == 0){
		setPrimerPtr(temp);
		setUltimoPtr(temp);
	}
	else{
		ultimoPtr->setSiguientePtr(temp);
		setUltimoPtr(temp);
	}
}

void lista::insertarComienzo(producto b){
	nodo* temp = new nodo(b);
	if(getUltimoPtr()==0){
		setPrimerPtr(temp);
		setUltimoPtr(temp);
	}
	else{
		setPrimerPtr(ultimoPtr);
		ultimoPtr->setSiguientePtr(temp);
		setPrimerPtr(temp);
	}
}


void lista::mostrar(){
	nodo* aux=getPrimerPtr();
	if(getPrimerPtr()==0){
		cout<<"La lista esta vacia"<<endl;
	}
	while(aux!=0){
		aux->getValor().imprimir();
		//cout<<aux->getSiguientePtr();
		aux= aux->getSiguientePtr();
	}
}

void lista::leer(){
	ifstream entrada("datosProductos.txt");
	string n;
	int p;
	while(!entrada.eof()){
		entrada>>n>>p;
		producto x(n,p);
		insertarFinal(x);
		//insertarComienzo(x);
	}
}
