#ifndef ARQUEROS_H
#define ARQUEROS_H
#include "Guerrero.h"
class Arqueros : public Guerrero
{
	public:
		Arqueros();
		int getFuerzaArqueros();
		void setFuerzaArqueros(int);
		void Atacar();
		~Arqueros();
	protected:
	int fuerza_ataque = 20;
};

#endif
