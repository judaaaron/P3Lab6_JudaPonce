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
		while( opcion != 6 ) {
		
		switch( opcion = menu() ){
		case 1:{
		
			break;
			}
			case 2:{
	
				
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
