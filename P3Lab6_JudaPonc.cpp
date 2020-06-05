#include <iostream>
#include<string>
#include<vector>

using namespace std;
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
	while(opcion < 1 || opcion > 6){
		
		cout<<"         MENU "<<endl
			<<"1. Sumar 2 numeros"<<endl
			<<"2. Restar 2 numeros"<<endl
			<<"3. Multiplicar 2 numeros"<<endl
			<<"4. Dividir 2 numeros"<<endl
			<<"5. Potencia"<<endl
			<<"6. Salir del programa"<<endl
			<<"Ingrese una opcion entre 1 y 5: ";
			cin>>opcion;
			cout<<endl;
			if(opcion >= 1 && opcion <= 6)
				break;
			else
				cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;	
				
	}//Fin del ciclo while
	
	
	return opcion;
}
