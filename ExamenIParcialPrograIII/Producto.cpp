#include "Producto.h"
#include <string>

Producto::Producto(int cantidad, std::string nombre, float precio)
{
	setCantidad(cantidad);
	setNombre(nombre);
	setPrecio(precio);
}

void Producto::setCantidad(int cantidad)
{
	this->cantidad = cantidad;
}

void Producto::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void Producto::setPrecio(float precio)
{
	this->precio = precio;
}

int Producto::getCantidad()
{
	return cantidad;
}

std::string Producto::getNombre()
{
	return nombre;
}

float Producto::getPrecio()
{
	return this->precio;
}

void Producto::setSig(Producto *sig)
{
	if (this->sig == 0)
		this->sig = sig;
	else
		sig->setSig(sig);
}

Producto* Producto::getSig()
{
	if (this->sig != 0)
		return this->sig;
	else
		return 0;
}