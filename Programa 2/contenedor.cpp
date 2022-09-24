#include "contenedor.h"


Contenedor::Contenedor(){
	cabeza=NULL;
	fin=NULL;
}

Contenedor::~Contenedor(){
	
	
}

void Contenedor::agregar(Nodo* nuevo){
	
	if(vacia()){
		cabeza=nuevo;
		fin=nuevo;
	}else{
		nuevo->setAnt(fin);
		fin->setSig(nuevo);
		fin=nuevo;
	}
	
}

bool Contenedor::vacia(){
	return cabeza==NULL;
//	return cab==NULL? true:false;
//	if(cab==NULL){
//		return true;
//	}else{
//		return false;
//	}
}


void Contenedor::imprimirLista(){
	
	
	if(!vacia()){
		Nodo* aux=cabeza;
		while(aux !=NULL){
			cout<<aux->getInfo()->getNombre()<<" "<<aux->getInfo()->getCedula()<<" "<<aux->getInfo()->getDireccion()<<endl;
			aux=aux->getSig();	
		}
	}
	
	
}

void Contenedor::guardar(){
	FILE *guarda;
	guarda=fopen("datos.XD","wb+");
	
	if(cabeza !=NULL){
		Nodo* aux=cabeza;
		while(aux !=NULL){
			fwrite(aux->getInfo(),sizeof(Dato),1,guarda);
			aux=aux->getSig();
		}
	}
	
	fclose(guarda);
	
}
