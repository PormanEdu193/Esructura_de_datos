#include "arbol.h"

arbol::arbol()
{
	setRaizPtr(0);
}

arbol::~arbol()
{
	;
}

nodoArbol* arbol::getRaizPtr(){
    return raizPtr;	
}
void arbol::setRaizPtr(nodoArbol* a){
	raizPtr=a;
}
void arbol::imprimir(){
	cout<<"La raiz apunta a:"<<getRaizPtr()<<endl;
}

void arbol::insertar(int i){
	ayudaInsertar(i,raizPtr);
}

void arbol::ayudaInsertar(int a,nodoArbol* &raizLocal){
	if(raizLocal==0){
		nodoArbol* temp= new nodoArbol(a);
		raizLocal = temp;
		cout<<"Dato insertado "<<a<<endl;
	}
	else{
		if(a<raizLocal->getValor()){
			cout<<"Dato insertado por la izquierda "<<a<<endl;
			ayudaInsertar(a,raizLocal->izPtr);	
		}
		else{
			if(a>raizLocal->getValor()){
				cout<<"Dato insertado por la derecha "<<a<<endl;
				ayudaInsertar(a,raizLocal->dePtr);
			}
			else{
			 	cout<<"Dato duplicado "<<a<<endl;
			}		
		}
	}
}
