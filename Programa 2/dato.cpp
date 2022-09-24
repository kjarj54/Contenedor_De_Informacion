#include "dato.h"


Dato::Dato(){
	
	
}

void Dato::setNombre(string nombre){
	this->nombre=nombre;
}


void Dato::setCedula(string cedula ){
	this->cedula=cedula;
}

void Dato::setDireccion(string direccion){
	this->direccion=direccion;
}

void Dato::setSalario(float salario){
	this->salario=salario;
}

string Dato::getNombre(){
	return nombre;
}

string Dato::getDireccion(){
	return direccion;
}
string Dato::getCedula(){
	return cedula;
}

float Dato::getSalario(){
	return salario;
}
