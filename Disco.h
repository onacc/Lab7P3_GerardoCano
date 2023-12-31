#pragma once
#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;
class Disco:public Producto<Disco>{
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
		cout << "\n- " << Producto::getId() << " " << titulo << " - " << artista << " - En stock: " << Producto::getStock() <<  "\n";
	}
	~Disco() {
		Producto::~Producto();

	}
};

