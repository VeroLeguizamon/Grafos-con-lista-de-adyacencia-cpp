#ifndef GRAFOS_H_
#define GRAFOS_H_
#include <iostream>
#include <string>
#include "ColaConPrioridad.h"
#include "Listas.h"
#include "Cola.h"
#include "Pila.h"
#include "Vertice.h"
enum Estado {
	VISITADO, NO_VISITADO
};

class Grafo{
private:
	Lista<Vertice*>* vertices;
	unsigned int tam;
public:
	Grafo();
	~Grafo();
	unsigned int obtenerTam();
	void insertarNodo(std::string nombreVertice);
	void insertarArista(std::string nombreOrigen, std::string nombreDestino, unsigned int peso);
	void eliminarNodo(std::string nombre);
	void eliminarArista();
	bool existeArista();
	Lista<Vertice*>* obtenerVertices();
	Vertice* existeNodo(std::string nombre);
	void mostrarListaAdyacencia();
	void recorridoProfundidad(Vertice* vertice);
	void mostrarElCaminoMinimo(Vertice* origen, Vertice* destino);
};


#endif /* GRAFOS_H_ */
