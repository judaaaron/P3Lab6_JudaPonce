#ifndef JINETE_H
#define JINETE_H
#include "Guerrero.h"

class Jinete : public Guerrero
{
	public:
		Jinete();
		int getFuerzaJinete();
		void setFuerzaJinete(int);
		void Atacar();
		~Jinete();
	protected:
	int fuerza_ataque = 30;
};

#endif
