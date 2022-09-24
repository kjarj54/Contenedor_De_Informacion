#include "dato.h"

#if !defined(_NODO_H)
#define _NODO_H

class Nodo{
	
private:
	Dato* info;
	Nodo* sig;
	Nodo* ant;
public:
	Nodo(Dato* nuevo);
	~Nodo();
	void setSig(Nodo* sig);
	void setAnt(Nodo* ant);
	Dato *getInfo();
	Nodo *getSig();
	Nodo *getAnt(); 
};



#endif
