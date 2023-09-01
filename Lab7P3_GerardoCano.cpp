// Lab7P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Resena.h"
#include "Producto.h"
#include "Libro.h"
using namespace std;
void menu() {
	int opcion;
	//vector<Producto<T>*> productos;
	//vector<Producto*> productos;
	Libro *ptrlibro;
	do {
		cout << "\nMenu Principal:\n\n1. Agregar Producto\n2. Modificar stock\n3. Listar productos disponibles\n4.Agregar resena\n5.Ver resenas de producto\n0.Salir\n\nIngrese una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "\nTipos de producto:\n1. Libro\n2. Pelicula\n3. Disco\n\nIngrese el tipo de producto: ";
			cin >> opcion;
			switch(opcion) {
			case 1:
				Libro libro();
				//ptrlibro = &libro;
				break;
			case 2:
				break;
			case 3:
				break;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;

		}
	} while (opcion);
}
int main(){
	menu();
}

