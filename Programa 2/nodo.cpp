#include "nodo.h"

 Nodo::Nodo(Dato* nuevo){
	info=nuevo;
	sig=NULL;
	ant=NULL;
}

Nodo::~Nodo(){
	delete info;
}

void Nodo::setSig(Nodo* sig){
	this->sig=sig;
}


void Nodo::setAnt(Nodo* ant){
	this->ant=ant;
}

Dato* Nodo::getInfo(){
	return info;
}
 
Nodo* Nodo::getSig(){
	return sig;
}

Nodo* Nodo::getAnt(){
	return ant;
}







