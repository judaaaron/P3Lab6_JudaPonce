#ifndef HABITANTE_H
#define HABITANTE_H

class Habitante
{
	public:
		Habitante();
		int getValorVida();
		void setValorVida(int);
		~Habitante();
	protected:
		int valorVida=100;
};

#endif
