/*Construir un programa que capture un deporte 
cualesquiera y despliegue dos implementos deportivos apropiados.*/
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int opcion;
	do{
	cout<<"---DEPORTES:---\n";
	cout<<"1: BasketBall\n";
	cout<<"2: FootBall\n";
	cout<<"3: Badminton\n";
	cout<<"4: Tenis\n";
	cout<<"5: Boxeo\n";
	cout<<"0: SALIR\n";
	cout<<"\nElija la opcion que desee: "; cin>>opcion;cout<<endl;
	
	switch(opcion){
	case 1: 
		cout<<"**BASKETBALL**\n"; 
		cout<<"Implementos necesario: \n";
		cout<<"1: Tablero con canasta y red\n";
		cout<<"2: Balon\n";
		
		getch();
		system("cls");
		break;
	case 2: 
		cout<<"**FOOTBALL**\n"; 
		cout<<"Implementos necesario: \n";
		cout<<"1: Uniforme que identifique al equipo que representa\n";
		cout<<"2: Zapatillas o Botas adecuadas\n";
		
		getch();
		system("cls");
		break;
	case 3: 
		cout<<"**BADMINTON**\n"; 
		cout<<"Implementos necesario: \n";
		cout<<"1: Raqueta\n";
		cout<<"2: Postes(1,55m) y Red(0,76m x 6,10m)\n";
		
		getch();
		system("cls");
		break;
	case 4: 
		cout<<"**TENIS**\n"; 
		cout<<"Implementos necesario: \n";
		cout<<"1: Pantalones cortos\n";
		cout<<"2: Zapatillas de tenis\n";
		
		getch();
		system("cls");
		break;
	case 5: 
		cout<<"**BOXEO**\n"; 
		cout<<"Implementos necesario: \n";
		cout<<"1: Guantes de boxeo\n";
		cout<<"2: Saco de boxeo\n";
		
		getch();
		system("cls");
		break;
	default: 
		cout<<"LA OPCION ELEGIDA NO SE ENCUENTRA EN EL MENU DE OPCIONES"; 
		
		getch();
		system("cls");
		break;
	}
	
	}while(opcion != 0);
	getch();
	return 0;
}
