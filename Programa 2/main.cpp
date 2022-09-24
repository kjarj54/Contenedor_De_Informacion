#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "contenedor.h"
using namespace std;
int main(int argc, char** argv)
{
    setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra ñ en pantalla
    
    Contenedor* C=new Contenedor();
    Dato* nuevoDato=new Dato();

    
    
    
    nuevoDato->setCedula("1234");
    nuevoDato->setNombre("Juan");
    nuevoDato->setDireccion("Perez Zeledón");
    nuevoDato->setSalario(10000);
    Nodo* nuevoNodo=new Nodo(nuevoDato);
    C->agregar(nuevoNodo);
 
	//nuevoNodo->
	

	
	nuevoDato=new Dato();
    nuevoDato->setCedula("567");
    nuevoDato->setNombre("Pedro");
    nuevoDato->setDireccion("Buenos Aires");
    nuevoDato->setSalario(90000);
    nuevoNodo=new Nodo(nuevoDato);
    C->agregar(nuevoNodo);
    
    nuevoDato=new Dato();
    nuevoDato->setCedula("8796");
    nuevoDato->setNombre("Maria");
    nuevoDato->setDireccion("Buenos Aires");
    nuevoDato->setSalario(200200);
    nuevoNodo=new Nodo(nuevoDato);
    C->agregar(nuevoNodo);
    
    
    C->imprimirLista();
    C->guardar();
    
	return 0;
}
