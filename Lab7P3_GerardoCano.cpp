// Lab7P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Resena.h"
#include "Producto.h"
#include "Libro.h"
#include "Disco.h"
#include "Pelicula.h"
using namespace std;
void menu() {
	//menu
	int opcion;
	vector<Libro*> libros;
	vector<Disco*>Discos;
	vector<Pelicula*>Peliculas;
	//vector<Producto*> productos;
	//Libro *ptrlibro;
	string titulo, autor;
	int numpg,stock,id;
	float precio;
	do {
		cout << "\nMenu Principal:\n\n1. Agregar Producto\n2. Modificar stock\n3. Listar productos disponibles\n4.Agregar resena\n5.Ver resenas de producto\n0.Salir\n\nIngrese una opcion: ";
		cin >> opcion;
		switch (opcion) {
		//crear productos
		case 1:
			cout << "\nTipos de producto:\n1. Libro\n2. Pelicula\n3. Disco\n\nIngrese el tipo de producto: ";
			cin >> opcion;
			switch(opcion) {
			case 1:
				cout << "\nIngrese id del producto";
				cin >> id;
				cout << "\nIngrese titulo del libro: ";
				cin >> titulo;
				cout << "\nIngrese autor del libro: ";
				cin >> autor;
				cout << "\nIngrese numero de paginas: ";
				cin >> numpg;
				cout << "\nIngrese precio: $";
				cin >> precio;
				cout << "\nIngrese stock incial: ";
				cin >> stock;
				//Libro l(titulo, autor, numpg, id, precio, stock);
				break;
			case 2:
				cout << "\nIngrese id del producto";
				cin >> id;
				cout << "\nIngrese titulo de la pelicula: ";
				cin >> titulo;
				cout << "\nIngrese nombre de director: ";
				cin >> autor;
				cout << "\nIngrese duracion: ";
				cin >> numpg;
				cout << "\nIngrese precio: $";
				cin >> precio;
				cout << "\nIngrese stock incial: ";
				cin >> stock;
				//Pelicula p(titulo, autor, numpg, id, precio, stock);
				break;
			case 3:
				cout << "\nIngrese id del producto";
				cin >> id;
				cout << "\nIngrese titulo del disco: ";
				cin >> titulo;
				cout << "\nIngrese nombre del artista: ";
				cin >> autor;
				cout << "\nIngrese numero de canciones: ";
				cin >> numpg;
				cout << "\nIngrese precio: $";
				cin >> precio;
				cout << "\nIngrese stock incial: ";
				cin >> stock;
				//Disco d(titulo, autor, numpg, id, precio, stock);
				break;
			}
			break;
		//modificar stock
		case 2:
			cout << "\nIngrese id de producto: ";
			break;
		case 3:
		//listar
			cout << "\nLista de productos: \n";
			cout << "Libros:\n";
			/*for (Libro l : libros)
				l.toString();
			cout<< "Peliculas: \n";
			for (Pelicula p : Peliculas)
				p.tostring();
			cout<<"Discos: \n";
			for (Disco d: discos)
				d.toString();
			*/
			break;
		case 4:
		//agregar resena
			cout << "Agregar resena: ";
			break;
		//ver resenas
		case 5:

			break;
		default:
			//delete
			break;

		}
	} while (opcion);
}
int main(){
	menu();
}

