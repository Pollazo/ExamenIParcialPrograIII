#include "Factura.h"
#include <string>
#include <iostream>

Factura::Factura(Fecha *fecha, std::string nombre)
{
	setFecha(fecha);
	setName(nombre);
}

void Factura::setFecha(Fecha *fecha)
{
	this->fecha = fecha;
}

Fecha* Factura::getFecha()
{
	return this->fecha;
}

void Factura::setName(std::string nombreCliente)
{
	this->nombreCliente = nombreCliente;
}

std::string Factura::getName()
{
	return nombreCliente;
}

void Factura::agregarProducto(int cantidad, std::string nombre, float precio)
{
	Producto *nuevo = new Producto(cantidad, nombre, precio);
	if (this->productos == 0)
		this->productos = nuevo;
	else
		this->productos->setSig(nuevo);
}

float Factura::getTotal()
{
	float precioTmp = 0;
	Producto *tmp = this->productos;
	while (tmp->getSig() != 0)
	{
		precioTmp = precioTmp + ((tmp->getCantidad()) * (tmp->getPrecio()));
		tmp = tmp->getSig();
	}
	this->subtotal = precioTmp;
	this->isv = precioTmp * 0.07;
	this->totalFinal = this->subtotal + this->isv;
	return this->totalFinal;
}

void Factura::agregarFactura(Fecha *fecha, std::string nombreCliente)
{
	Factura *nueva = new Factura(fecha, nombreCliente);
		if (this->sig == 0)
			this->sig = nueva;
		else
			this->sig->agregarFactura(fecha, nombreCliente);
	
}

Factura* Factura::buscar(std::string nombre)
{
	Factura *tmp = this;
	while (sig != 0)
	{
		if (tmp->getName() == nombre)
			return tmp;
		else
			this->sig->buscar(nombre);
	}
	return 0;
}

void Factura::contarFacturas()
{
	int contador = 1;
	Factura *tmp = this;
	while (tmp->sig != 0)
	{
		contador++;
		tmp = tmp->sig;
	}
	std::cout << "Total de Facturas: " << contador << std::endl;
}

float Factura::getTotalFacturas()
{
	float totalFacturas = 0;
	Factura *tmp = this;
	while (tmp->sig != 0)
	{
		totalFacturas = totalFacturas + tmp->getTotal();
		tmp = tmp->sig;
	}
	return totalFacturas;
}

