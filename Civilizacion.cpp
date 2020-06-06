#include "Civilizacion.h"


Civilizacion::Civilizacion()
{
}

string Civilizacion:: getNombre(){
	return this->nombre;
}
int Civilizacion:: getCMadera(){
	return this->Madera;
}
int Civilizacion::getCOro(){
	return this->Oro;
}
int Civilizacion:: getCAlimento(){
	return this->Alimento;
	
}
void Civilizacion::setCMadera(int wood){
	this->Madera=wood;
}
void Civilizacion::setCOro(int gold){
	this->Oro=gold;
	
}
void Civilizacion:: setCAlimento(int food){
this->Alimento=food;	
}
		
int Civilizacion::getHabitantes(){
	return this->numeroHabitantes;
}
int Civilizacion::getCasas(){
	return this->numeroCasas;
}
int Civilizacion::getCuarteles(){
	return this->numeroCuarteles;
}
int Civilizacion::getEstablos(){
	return this->numerosEstablos;
}
void Civilizacion::setHabitantes(int habi){
	this->numeroHabitantes=habi;
	
}
void Civilizacion::setCasas(int houses){
this->numeroCasas+=houses;	
}
void Civilizacion::setCuarteles(int cuarteles){
	this->numeroCuarteles+=cuarteles;
	
}
void Civilizacion:: setEstablos(int establos){
	this->numerosEstablos+=establos;
}

Civilizacion::Civilizacion(string name)
{
	this->nombre=name;
	this->numeroCasas += 2;
	this->Madera = 50;
	this->Oro = 50;
	this->Alimento = 50;	
	
	habitantes.push_back(new Aldeano());
	habitantes.push_back(new Aldeano());
	habitantes.push_back(new Aldeano());
	habitantes.push_back(new Aldeano());
	habitantes.push_back(new Aldeano());
	habitantes.push_back(new Jinete());
	this->numeroHabitantes += 6;

}

void Civilizacion::pagaMadera(int price){
	this->Madera -= price;
}
void Civilizacion:: pagaOro(int price2){
	this->Oro-=price2;
}
void Civilizacion:: pagaAlimento(int price3){
this->Alimento-=price3;	
}

vector<Habitante*> Civilizacion::getHola(){
	return this->habitantes;
}





Civilizacion::~Civilizacion()
{
}
