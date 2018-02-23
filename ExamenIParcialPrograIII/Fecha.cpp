#include "Fecha.h"
#include <iostream>

Fecha::Fecha(int dia, int mes, int a�o)
{
	setDia(dia);
	setMes(mes);
	setA�o(a�o);
}

void Fecha::setA�o(int a�o)
{
	this->a�o = a�o;
}

void Fecha::setMes(int mes)
{
	this->mes = mes;
}

void Fecha::setDia(int dia)
{
	this->dia = dia;
}

int Fecha::getA�o()
{
	return a�o;
}

int Fecha::getMes()
{
	return mes;
}

int Fecha::getDia()
{
	return dia;
}

void Fecha::imprimirFecha()
{
	std::cout << this->getDia() << "-" << this->getMes() << "-" << this->getA�o() << std::endl;
}