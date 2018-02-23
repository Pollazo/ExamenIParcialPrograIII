#include "Factura.h"
#include "Fecha.h"
#include <iostream>
#include <string>



int main()
{
	Fecha *fecha1 = new Fecha(12, 2, 2018);

	Factura *lista = new Factura(fecha1, "Herbert");
	lista->agregarFactura(fecha1, "Hola");
	lista->agregarProducto(2, "Carro", 120000);
	lista->agregarProducto(3, "Botella", 120);
	std::cout << std::endl;
	lista->getFecha()->imprimirFecha();
	std::cout << "Nombre del Cliente: " << lista->getName() << std::endl;
	lista->contarFacturas();
	std::cout << "Total de esta factura: " << lista->getTotal() << std::endl << std::endl;
	std::cout << "Total de todas las facturas: " << lista->getTotalFacturas() << std::endl;

	std::cout << std::endl << std::endl << std::endl;
	system("pause");
	
	return 0;

}