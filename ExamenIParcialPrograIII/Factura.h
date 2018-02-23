#ifndef FACTURA_H
#define FACTURA_H
#include "Fecha.h"
#include "Producto.h"
#include <string>

class Factura
{
public:
	Factura(Fecha*, std::string);
	void setFecha(Fecha*);
	Fecha *getFecha();

	void setName(std::string);
	std::string getName();

	void agregarProducto(int,std::string, float);
	float getTotal();

	void agregarFactura(Fecha*, std::string);
	Factura *buscar(std::string);

	void contarFacturas();
	float getTotalFacturas();


private:
	Fecha *fecha;
	std::string nombreCliente;
	Producto *productos;
	Factura *sig;
	int subtotal, isv, totalFinal;
};



#endif // !FACTURA_H
