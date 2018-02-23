#ifndef PORDUCTO_H
#define PRODUCTO_H
#include <string>

class Producto
{
public:
	Producto(int, std::string, float);
	void setCantidad(int);
	void setNombre(std::string);
	void setPrecio(float);

	int getCantidad();
	std::string getNombre();
	float getPrecio();

	void setSig(Producto *);
	Producto* getSig();

private:
	int cantidad;
	std::string nombre;
	float precio;
	Producto *sig;
};



#endif // !PORDUCTO_H

