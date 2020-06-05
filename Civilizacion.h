#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include<string>

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
		
		
		~Civilizacion();
	protected:
		string nombre;
		int cantidadMadera = 50, cantidadOro = 50, cantidadAlimento = 50;
	//	vector <Habitante> habitantes;
		int numeroHabitantes = 0, numeroCasas = 2 ,numeroCuarteles = 0,numerosEstablos = 0;
};

#endif
