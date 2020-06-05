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

Habitante::~Habitante()
{
}
