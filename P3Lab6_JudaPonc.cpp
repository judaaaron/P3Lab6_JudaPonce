#include <iostream>
#include<string>
#include<vector>
#include"Civilizacion.h"
#include"Habitante.h"
#include"Guerrero.h"
#include"Jinete.h"
#include"Arqueros.h"
#include"Caballeros.h"
#include"Aldeano.h"

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
							if (civilizacion[civil]->getCAlimento() < 25){
								cout <<"Recursos insuficientes para crear aldeano";
							}else {
								toAdd.push_back(new Aldeano());
								cout << "Aldeando en creacion" << endl;
								civilizacion[civil]->pagaAlimento(25);
							}
						
						} else {
							cout << "Capacidad maxima de habitantes, ya no se puede agregar mas :(" << endl;
						}
							
							break;
						}
						
						case 2:{
								if (civilizacion[civil]->getHabitantes() <=capacidad){
									if(civilizacion[civil]->getCMadera()<5 && civilizacion[civil]->getCOro()<20 && civilizacion[civil]->getCAlimento()<75){
										cout<<"Recursos insuficientes para crear jinete"<<endl;
									}else{
										toAdd.push_back(new Jinete());
										cout<<"Jinete en creacion"<<endl;
										civilizacion[civil]->pagaOro(20);
										civilizacion[civil]->pagaMadera(20);
										civilizacion[civil]->pagaAlimento(75);
									}
								}else{
										cout<<"Capacidad maxima de habitantes, ya no se puede agregar :("<<endl;
	
							}
							
							break;
						}
						
						case 3:{
							if (civilizacion[civil]->getHabitantes() <= capacidad){
								if(civilizacion[civil]->getCMadera()<10 && civilizacion[civil]->getCOro()<10 && civilizacion[civil]->getCAlimento()<50){
									cout<<"Recursos insuficientes para crear arquero"<<endl;
								}else{
									toAdd.push_back(new Arqueros());
									cout<<"Arquero en creacion"<<endl;
									civilizacion[civil]->pagaMadera(10);
									civilizacion[civil]->pagaOro(10);
									civilizacion[civil]->pagaAlimento(50);
									
								}
								
							}else{
								cout<<"Capacidad maxima de habitantes, ya no se puede agregar :("<<endl;
							}
							
							
							break;
						}
						
						case 4:{
							if (civilizacion[civil]->getHabitantes() <= capacidad){
								if(civilizacion[civil]->getCMadera()< 5 && civilizacion[civil]->getCOro() < 15 && civilizacion[civil]->getCAlimento()<50){
									cout<<"Recursos insuficientes para crear caballero"<<endl;
								}else{
									toAdd.push_back(new Caballeros());
									cout<<"Caballero en creacion"<<endl;
									civilizacion[civil]->pagaMadera(5);
									civilizacion[civil]->pagaOro(15);
									civilizacion[civil]->pagaAlimento(50);
								}
							}else{
								cout<<"Capacidad maxima de habitantes, ya no se puede agregar :("<<endl;
							}
							
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
								for (int i = 0; i < toAdd.size(); i++){
									Aldeano* ptrAldeano = dynamic_cast<Aldeano*>(toAdd[i]);
									if (ptrAldeano == 0){
										Jinete* ptrJinete = dynamic_cast<Jinete*>(toAdd[i]);
										if (ptrJinete == 0){
											Arqueros* ptrArquero = dynamic_cast<Arqueros*>(toAdd[i]);
											if (ptrArquero == 0){
												Caballeros* ptrCaballero = dynamic_cast<Caballeros*>(toAdd[i]);
												if (ptrCaballero != 0){	
													toAdd[i]->reloj();
													if (toAdd[i]->getTiempo() == 4){
														civilizacion[civil]->getHola().push_back(new Caballeros());
														cout << "Se ha a�adido un Caballero!" << endl;
														civilizacion[civil]->setHabitantes(1);
														toAdd.erase(toAdd.begin() + i);
													}
												}
								
												}else {
													toAdd[i]->reloj();
													if (toAdd[i]->getTiempo() == 4){
													civilizacion[civil]->getHola().push_back(new Arqueros());
													cout << "Se ha agregado un Arquero!" << endl;
													civilizacion[civil]->setHabitantes(1);
												}
											}
							
											} else {
												toAdd[i]->reloj();
												if (toAdd[i]->getTiempo() == 6){
													civilizacion[civil]->getHola().push_back(new Jinete());
													cout << "Se ha agregado un Jinete!" << endl;
													civilizacion[civil]->setHabitantes(1);

													}
										}
						
										} else {
											toAdd[i]->reloj();
											if (toAdd[i]->getTiempo() == 1){
												civilizacion[civil]->getHola().push_back(new Aldeano());
												cout << "Se ha agregado un aldeano!" << endl;
												civilizacion[civil]->setHabitantes(1);
											}
										}
									}
							
							
							break;
				
						}
					}
				}else{
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
