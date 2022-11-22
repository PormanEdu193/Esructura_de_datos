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

nodoArbol*& arbol::tres(){
	return raizPtr;
}

void arbol::insertar(persona i){
	ayudaInsertar(i,tres());
}

void arbol::ayudaInsertar(persona a,nodoArbol * & raizLocal){
	if(raizLocal==0){
		nodoArbol* temp= new nodoArbol(a);
		raizLocal = temp;
		cout<<"Dato insertado "<<a.getNombre()<<endl;
	}
	else{
		if(a.getNombre()<raizLocal->getPersona().getNombre(){
			cout<<"Dato insertado por la izquierda "<<a<<endl;
			ayudaInsertar(a,raizLocal->uno());	
		}
		else{
			if(a>raizLocal->getPersona().getNombre()){
				cout<<"Dato insertado por la derecha "<<a<<endl;
				ayudaInsertar(a,raizLocal->dos());
			}
			else{
			 	cout<<"Dato duplicado "<<a<<endl;
			}		
		}
	}
}

void arbol::inOrden(){
	mostrarInOrden(getRaizPtr());
}

void arbol::mostrarInOrden(nodoArbol* raizLocal){
	if(raizLocal!=0){
		mostrarInOrden(raizLocal->getIzPtr());
		cout<<raizLocal->getValor()<<endl;
		mostrarInOrden(raizLocal->getDePtr());
	}
}
