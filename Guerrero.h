#ifndef GUERRERO_H
#define GUERRERO_H
#include "Habitante.h"

class Guerrero : public Habitante
{
	public:
		Guerrero();
		int getValorAtaque();
		void setValorAtaque(int);
		virtual void Atacar() = 0;
		~Guerrero();
	protected:
	int valorAtaque;

};

#endif
