#include "Civilizacion.h"

Civilizacion::Civilizacion()
{
}

string Civilizacion:: getNombre(){
	return this->nombre;
}
int Civilizacion:: getCMadera(){
	return this->cantidadMadera;
}
int Civilizacion::getCOro(){
	return this->cantidadOro;
}
int Civilizacion:: getCAlimento(){
	return this->cantidadAlimento;
	
}
void Civilizacion::setCMadera(int wood){
	this->cantidadMadera=wood;
}
void Civilizacion::setCOro(int gold){
	this->cantidadOro=gold;
	
}
void Civilizacion:: setCAlimento(int food){
this->cantidadAlimento=food;	
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
this->numeroCasas=houses;	
}
void Civilizacion::setCuarteles(int cuarteles){
	this->numeroCuarteles=cuarteles;
	
}
void Civilizacion:: setEstablos(int establos){
	this->numerosEstablos=establos;
}

Civilizacion::Civilizacion(string name)
{
	this->nombre=name;

}

Civilizacion::~Civilizacion()
{
}
