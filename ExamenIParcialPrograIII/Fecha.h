#ifndef FECHA_H
#define FECHA_H

class Fecha
{
public:
	Fecha(int, int, int);
	void setDia(int);
	void setMes(int);
	void setA�o(int);

	int getDia();
	int getMes();
	int getA�o();

	void imprimirFecha();

private:
	int dia, mes, a�o;
};




#endif // !FECHA_H

