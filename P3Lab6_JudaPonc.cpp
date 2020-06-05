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
int menu();

int main(int argc, char** argv) {
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
				int option=0;
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
					if(option >= 1 && option <= 10)
						break;
					else
						cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;
						
							
				
				}//Fin del ciclo while
				
				break;
				
				
			} 
			
			case 6:{
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
