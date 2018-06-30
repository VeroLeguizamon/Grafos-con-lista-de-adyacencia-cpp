#include "Grafos.h"
#include <iostream>

using namespace std;

int main(){
	Grafo grafo;

	grafo.insertarNodo("TIJ");
	grafo.insertarNodo("MTY");
	grafo.insertarNodo("MZT");
	grafo.insertarNodo("BJX");
	grafo.insertarNodo("GDL");
	grafo.insertarNodo("SAN");
	grafo.insertarNodo("TAM");
	grafo.insertarNodo("MEX");
	grafo.insertarNodo("CUN");
	grafo.insertarNodo("MID");

	grafo.insertarArista("TIJ", "MTY", 800);
	grafo.insertarArista("MZT", "TIJ", 400);
	grafo.insertarArista("MZT", "BJX", 300);
	grafo.insertarArista("MTY", "BJX", 700);
	grafo.insertarArista("BJX", "SAN", 900);
	grafo.insertarArista("BJX", "TAM", 400);
	grafo.insertarArista("BJX", "MEX", 350);
	grafo.insertarArista("GDL", "MZT", 500);
	grafo.insertarArista("GDL", "MTY", 450);
	grafo.insertarArista("GDL", "BJX", 250);
	grafo.insertarArista("GDL", "MEX", 500);
	grafo.insertarArista("SAN", "MID", 1200);
	grafo.insertarArista("TAM", "MID", 450);
	grafo.insertarArista("MEX", "MID", 450);
	grafo.insertarArista("MEX", "CUN", 650);
	grafo.insertarArista("CUN", "GDL", 650);

	grafo.mostrarListaAdyacencia();

	cout<<"Recorrido en profundidad"<<endl;
	grafo.recorridoProfundidad(grafo.existeNodo("BJX"));

	return 0;
}
