#include "Habitante.h"

Habitante::Habitante()
{
}

int Habitante::getValorVida(){
	return this->valorVida;
}

void Habitante:: setValorVida(int life){
	this->valorVida=life;
}

int Habitante::getTiempo(){
	return this->hora;
}

void Habitante::reloj(){
	this->hora++;
}

Habitante::~Habitante()
{
}
