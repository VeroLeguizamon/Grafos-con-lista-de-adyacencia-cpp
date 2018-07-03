#ifndef VERTICE_H_
#define VERTICE_H_
#include <iostream>
#include <string>
#include "Listas.h"
#include "Arista.h"

class Arista;

class Vertice{
private:
	std::string nombre;
	Lista<Arista*>* adyacentes;
	unsigned int indice;

public:
	Vertice(std::string nombre,unsigned int indice);
	~Vertice();
	std::string obtenerNombre();
	Lista<Arista*>* obtenerAdyacentes();
	unsigned int obtenerIndice();
	void agregarArista(Arista* nuevaArista);

};

#endif /* VERTICE_H_ */
