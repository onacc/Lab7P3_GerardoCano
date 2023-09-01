#pragma once
#include <string>
#include "Producto.h"
#include <iostream>
using namespace std;
template <typename T>
class Resena{
	string comentario;
	int calificacion;
	Producto<T> producto;
public:
	Resena() {

	}
	Resena(T val, string comentario, int calificacion) {
		cout<<""
	}
	Producto getProducto() {
		return producto;
	}
	string getComentario() {
		return comentario;
	}
	int getCalificacion() {
		return calificacion;
	}
	void toString() {

	}
	

};

