#pragma once
template <typename T>
class Producto{
	int id;
	float precio;
	int stock;
public:
	Producto() {

	}
	Producto(int id, float precio, int stock) {
		this->id = id;
		this->precio = precio;
		this->stock = stock;
	}
	int getId() {
		return id;
	}
	float getPrecio() {
		return precio;
	}
	int getStock() {
		return stock;
	}
	~Producto() {

	}
	

}

