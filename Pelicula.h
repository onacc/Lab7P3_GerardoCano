#pragma once
#include "Producto.h"
#include <string>
using namespace std;
class Pelicula:public Producto{
	string titulo;
	string director;
	int duracion;
public:
	Pelicula() {

	}
	Pelicula(string titulo, string director,int duracion, int id, float precio, int stock):Producto(id,precio,stock) {
		this->titulo=titulo;
		this->director = director;
		this->duracion = duracion;
	}
	string getTitulo() {
		return titulo;
	}
	string getDirector() {
		return director;
	}
	int getDuracion() {
		return duracion;
	}
	void tostring() {

	}
	~Pelicula() {
		Producto::~Producto();

	}

};

