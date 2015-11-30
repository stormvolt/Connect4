#include "menu.h"

using namespace std;

//Constructor
Menu::Menu()
{
	stillAlive = true;
	cursor = 0;
}


//Inicia el programa
void Menu::startGame()
{
	while(stillAlive==true)
	{
		showMenu();
	}
}


//Esta es la pantalla del menú y permite seleccionar opciones
void Menu::showMenu()
{
	printMenu();
	cout<<"Seleccione una de las siguientes opciones:"<<"\n";
	cout<<"\n";
	cout<<"(1) CLASSIC"<<"\n";
	cout<<"(2) POP OUT"<<"\n";
	cout<<"(3) ROW BY ROW"<<"\n";
	cout<<"(4) CONNECT 5"<<"\n";
	cout<<"(5) QUICK GAME"<<"\n";
	cout<<"(6) HIGH SCORES"<<"\n";
	cout<<"(7) EXIT"<<"\n";
	cout<<"\n";
	cout<< "Opción seleccionada: ";
	cin>> cursor;
	while(cursor<1 || cursor>7)
	{
		cout<< "Opción no válida, intente con otra."<<"\n";
		cout<< "Opción seleccionada: ";
		cin>>cursor;
	}
	if(cursor==1)
	{
		startClassic();	
	}
	else if(cursor==2)
	{
		startPop();	
	}
	else if(cursor==3)
	{
		startRow();	
	}
	else if(cursor==4)
	{
		startFive();	
	}
	else if(cursor==5)
	{
		startQuick();	
	}
	else if(cursor==6)
	{
		showScores();	
	}
	else if(cursor==7)
	{
		stillAlive = false;	
	}
	system("clear");
}

