#ifndef FECHA_H
#define FECHA_H

class Fecha
{
public:
	Fecha(int, int, int);
	void setDia(int);
	void setMes(int);
	void setAño(int);

	int getDia();
	int getMes();
	int getAño();

	void imprimirFecha();

private:
	int dia, mes, año;
};




#endif // !FECHA_H

