#include <iostream>
#include<string>
#include<vector>
#include"Civilizacion.h"
#include"Habitante.h"
#include"Guerrero.h"
#include"Jinete.h"
#include"Arqueros.h"
#include"Caballeros.h"

using namespace std;

vector<Civilizacion*>civilizacion;
int civil;
vector <Habitante*> toAdd;
int menu();

int main(int argc, char** argv) {
	civilizacion.push_back(new Civilizacion("Tribu de juda"));
	Civilizacion* prt= NULL;
	int opcion=0;
		while( opcion != 3 ) {
		
		switch( opcion = menu() ){
		case 1:{
		string nombreCivilizacion;
		cout<<" Ingrese nombre de la civilizacion: ";
		cin>> nombreCivilizacion;
		civilizacion.push_back(new Civilizacion(nombreCivilizacion));
		cout<<" Tu civilizacion ha sido creada exitosamente "<<endl;
		cout<<endl;
		
			break;
			}
			case 2:{
				if(civilizacion.size()==0){
					cout<<"No hay ninguna civilizacion creada hasta el momento..."<<endl;
				}else{
					
					cout<<"Listado de civilizaciones..."<<endl;
					cout<<"Nota la lista comienza en 0"<<endl;
					for(int i=0; i < civilizacion.size(); i++){
						cout<<i<<". "<<civilizacion[i]->getNombre()<<endl;
					}
					cout<<endl;
					cout<<"Seleccione una civilizacion: ";
					cin>>civil;
					int option=0;
					int capacidad = civilizacion[civil]->getCasas() * 5;
					while(option < 1 || option > 10){
						cout<<"     MENU "<<endl
						<<"1. Crear aldeano"<<endl
						<<"2. Crear jinete"<<endl
						<<"3. Crear arquero"<<endl
						<<"4. Crear caballero"<<endl
						<<"5. Construir casa"<<endl
						<<"6. Construir cuartel"<<endl
						<<"7. Construir establo"<<endl
						<<"8. Ir a guerra"<<endl
						<<"9. Siguiente hora"<<endl
						<<"10.SALIR"<<endl
						<<"Ingrese una opcion entre 1 y 10: ";
						cin>>option;
						cout<<endl;
						if(option >= 1 && option <= 10){
							switch(option){
						
						case 1:{
						if (civilizacion[civil]->getHabitantes() <=capacidad){
							if (civilizacion[civil]->getCAlimento() >= 25){
								toAdd.push_back(new Aldeano());
								cout << "Se esta creando un aldeano..." << endl;
								civilizacion[civil]->pagaAlimento(25);
							}else {
								cout <<"Recursos insuficientes para crear aldeano";
							}
						
						} else {
							cout << "Capacidad maxima de habitantes, ya no se puede agregar" << endl;
						}
							
							break;
						}
						
						case 2:{
							
							break;
						}
						
						case 3:{
							
							
							break;
						}
						
						case 4:{
							
							break;
						}
						
						case 5:{
							if (civilizacion[civil]->getCMadera() >= 50){
								civilizacion[civil]->setCasas(1);
							} else {
							cout << "Recursos insuficientes para crear casa :(" << endl;
							}
							
							break;
						}
						
						
						case 6:{
							if (civilizacion[civil]->getCMadera() >= 200 && civilizacion[civil]->getCOro() >= 50){
								civilizacion[civil]->setCuarteles(1);
							} else {
								cout << "Recursos insuficientes para crear un cuartel :(" << endl;
							}
							break;
						}
						
						
						case 7:{
							if (civilizacion[civil]->getCMadera() >= 150 && civilizacion[civil]->getCOro() >= 50){
								civilizacion[civil]->setEstablos(1);
							} else {
								cout << "Recursos insuficientes para crear un establo" << endl;
							}
							
							
							break;
						}
						
						
						case 8:{
							
							
							break;
						}
						
						case 9:{
							
							break;
						}
					}
						}
						else{
							cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;	
						}
					
				
						
					}
			
				
				}//Fin del ciclo while
				
				break;
				
				
			} 
			
			case 3:{
				//opcion de salida
				cout<<"Saliendo del programa..."<<endl;
				
				break;
			}
			
		
								
		}// fin del switch
		
	
	}// fin del while
	
	return 0;
}

int menu(){
	int opcion=0;
	while(opcion < 1 || opcion > 3){
		
		cout<<"         MENU "<<endl
			<<"1. Crear civilizacion"<<endl
			<<"2. Jugar"<<endl
			<<"3. Salir"<<endl
			<<"Ingrese una opcion entre 1 y 3: ";
			cin>>opcion;
			cout<<endl;
			if(opcion >= 1 && opcion <= 3)
				break;
			else
				cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;	
				
	}//Fin del ciclo while
	
	
	return opcion;
}
