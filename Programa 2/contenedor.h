
#include "nodo.h"
#if !defined(_CONTENEDOR_H)
#define _CONTENEDOR_H

class Contenedor{
private:
	Nodo* cabeza;
	Nodo* fin;
	
public:
	Contenedor();
	~Contenedor();
	void agregar(Nodo* nuevo);
	bool vacia();
	void imprimirLista();
	void guardar();
	
};




#endif






