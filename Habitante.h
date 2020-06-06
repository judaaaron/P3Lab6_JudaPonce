#ifndef HABITANTE_H
#define HABITANTE_H

class Habitante
{
	public:
		Habitante();
		int getValorVida();
		void setValorVida(int);
		int getTiempo();
		void reloj();
		virtual ~Habitante();
	protected:
		int valorVida=100;
		int hora=0;
};

#endif
