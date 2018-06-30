#ifndef ARISTA_H_
#define ARISTA_H_

#include <iostream>
#include "Vertice.h"

class Vertice;
class Arista{
private:
	unsigned int peso;
	Vertice* destino;

public:
	Arista();
	Arista(unsigned int peso);
	Arista(Vertice* destino, unsigned int peso);
	~Arista();
	unsigned int obtenerPeso();
	Vertice* obtenerDestino();
};




#endif /* ARISTA_H_ */
