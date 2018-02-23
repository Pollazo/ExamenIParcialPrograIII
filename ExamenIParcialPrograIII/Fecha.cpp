#include "Fecha.h"
#include <iostream>

Fecha::Fecha(int dia, int mes, int año)
{
	setDia(dia);
	setMes(mes);
	setAño(año);
}

void Fecha::setAño(int año)
{
	this->año = año;
}

void Fecha::setMes(int mes)
{
	this->mes = mes;
}

void Fecha::setDia(int dia)
{
	this->dia = dia;
}

int Fecha::getAño()
{
	return año;
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
	std::cout << this->getDia() << "-" << this->getMes() << "-" << this->getAño() << std::endl;
}