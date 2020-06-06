#ifndef CABALLEROS_H
#define CABALLEROS_H
#include"Guerrero.h"

class Caballeros : public Guerrero
{
	public:
		Caballeros();
		int getFuerzaCaballeros();
		int setFuerzCaballeros(int);
		void Atacar();
		~Caballeros();
	protected:
	int fuerza_ataque = 10;
};

#endif
