#ifndef CABALLEROS_H
#define CABALLEROS_H
#include"Guerrero.h"

class Caballeros
{
	public:
		Caballeros();
		int getFuerzaCaballeros();
		int setFuerzCaballeros(int);
		~Caballeros();
	protected:
	int fuerza_ataque = 10;
};

#endif
