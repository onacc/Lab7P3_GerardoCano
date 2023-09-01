#pragma once
#include <string>
#include "Producto.h"
#include <iostream>
using namespace std;
class Resena{
	string comentario;
	int calificacion;
	Producto producto;
public:
	Producto getProducto() {
		return producto;
	}
	string getComentario() {
		return comentario;
	}
	int getCalificacion() {
		return calificacion;
	}
};

