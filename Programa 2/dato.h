#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include <string.h>
using namespace std;


#if !defined(_DATO_H)
#define _DATO_H

class Dato{
private:
	string nombre;
	string cedula;
	string direccion;
	float salario;
public:	
	Dato();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void setDireccion(string direccion);
	void setSalario(float salario);
	string getNombre();
	string getCedula();
	string getDireccion();
	float getSalario();
	
};



#endif
