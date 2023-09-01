#pragma once
#include "Producto.h"
#include <string>
using namespace std;
class Libro:public Producto<Libro>{
	string titulo;
	string autor;
	int numpaginas;
public:
	Libro() {

	}
	Libro(string titulo, string autor, int numpaginas, int id, float precio,int stock):Producto(id,precio,stock) {
		this->titulo = titulo;
		this->autor = autor;
		this->numpaginas;
	}
	string getTitulo() {
		return titulo;
	}
	string getAutor() {
		return autor;
	}
	int getNumPaginas() {
		return numpaginas;
	}
	~Libro() {
		Producto::~Producto();
	}

};

