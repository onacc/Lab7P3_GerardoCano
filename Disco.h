#pragma once
#include "Producto.h"
#include <string>
using namespace std;
class Disco:public Producto{
	string titulo;
	string artista;
	int numCanciones;
public:
	Disco() {

	}
	Disco(string titulo, string artista, int numCanciones, int id,float precio,int stock):Producto(id,precio,stock) {
		this->titulo = titulo;
		this->artista = artista;
		this->numCanciones = numCanciones;
	}
	string getTitulo() {
		return titulo;
	}
	string getArtista() {
		return artista;
	}
	int getNumCanciones() {
		return numCanciones;
	}
	void toString() {

	}
	~Disco() {
		Producto::~Producto();

	}
};

