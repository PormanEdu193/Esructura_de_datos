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
	if(getPrimerPtr()==0){
		setPrimerPtr(temp);
		setUltimoPtr(temp);
	}
	else{
		temp->setSiguientePtr(primerPtr);
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

void lista::eliminarFinal(){
	nodo* aux=getPrimerPtr();
	if(getPrimerPtr()==0){
		cout<<"La lista esta vacia"<<endl;
	}
	else{
		nodo* aux2 =getUltimoPtr();
		while(aux->getSiguientePtr()!=getUltimoPtr()){
		    aux= aux->getSiguientePtr();
	    }
	    aux->setSiguientePtr(0);
	    setUltimoPtr(aux);
	    delete aux2;
	}	
}

void lista::eliminarInicio(){
	nodo* aux=getPrimerPtr();
	if(getPrimerPtr()==0){
		cout<<"La lista esta vacia"<<endl;
	}
	else{
	    nodo* aux2 = getPrimerPtr();
		aux= aux->getSiguientePtr();
	    setPrimerPtr(aux);
	    delete aux2;
	}
}

void lista::leer(){
	ifstream entrada("datosP.txt");
	string n;
	int p;
	while(!entrada.eof()){
		entrada>>n>>p;
		//if(p<1000){
			producto x(n,p);
		    insertarFinal(x);
		    //insertarComienzo(x);
		//}
		
	}
}
