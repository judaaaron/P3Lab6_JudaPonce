#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <vector>
#include <string>
#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arqueros.h"
#include "Caballeros.h"

using namespace std;


class Civilizacion
{
	public:
		Civilizacion();
		Civilizacion(string);
		string getNombre();
		int getCMadera();
		int getCOro();
		int getCAlimento();
		void setCMadera(int);
		void setCOro(int);
		void setCAlimento(int);
		
		int getHabitantes();
		int getCasas();
		int getCuarteles();
		int getEstablos();
		void setHabitantes(int);
		void setCasas(int);
		void setCuarteles(int);
		void setEstablos(int);
		//vector<Habitante*> getHabitantes();
		
		~Civilizacion();
	protected:
		string nombre;
		int cantidadMadera = 0, cantidadOro = 0, cantidadAlimento = 0;
		vector <Habitante*> habitantes;
		int numeroHabitantes = 0, numeroCasas = 0 ,numeroCuarteles = 0,numerosEstablos = 0;
};

#endif
