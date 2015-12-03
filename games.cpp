#include "games.h"

using namespace std;

//Inicia un juego en el modo Classic
void startClassic()
{
	Tablero game;
	ScoreBoard board1(1, 540);
	ScoreBoard board2(2, 540);
	printClassic();
	printScreen(game, board1, board2);
	while(game.getEndGame()==false)
	{
		cout<< "\n";
		printPlayer(game.getPlayer());
		cout<< "Seleccione la columna: ";
		int columna;
		cin>> columna;
		while(game.columnFull(columna)==true || columna==0 || columna>8)
		{
	            	cout<< "Posición no válida, intente con otra."<<"\n";
			cout<< "Seleccione la columna: ";
			cin>> columna;
		}
		game.addFicha(columna);
		printClassic();
		printScreen(game, board1, board2);
		if(game.win()==true)
		{
			printClassic();
			printScreen(game, board1, board2);
			cout<<" "<<"\n";
			delay(3);
			printWinner(game.getPlayer());
			string name;
			cout<< "Jugador"<< game.getPlayer()<<"\n";
			cout<<"Ingrese su nombre: ";
			cin>>name;
			if(game.getPlayer()==1)
			{
				board1.indexScore(name);
			}
			else if(game.getPlayer()==2)
			{
				board2.indexScore(name);
			}
		}
		else if(game.space()==false)
		{
			printDraw();
		}
		if(game.getPlayer()==1)
		{
			board1.nextTurn();
		}
		else if(game.getPlayer()==2)
		{
			board2.nextTurn();
		}
		game.changePlayer();
	}
}



//Inicia un juego en el modo Pop out
void startPop()
{
	TableroPop game;
	ScoreBoard board1(1, 640);
	ScoreBoard board2(2, 640);
	printPop();
	printScreen(game, board1, board2);
	while(game.getEndGame()==false)
	{
		cout<< "\n";
		printPlayer(game.getPlayer());
		int columna;
		int option;
		if(game.empty()==true)
		{
			option=1;
		}
		else
		{
			cout<<"Seleccione lo que hará en este turno:"<<"\n";
			cout<<"(1) Añadir ficha"<<"\n";
			cout<<"(2) Remover ficha"<<"\n";
			cout<<"Opción: ";
			cin>>option;
		}
		if(option!=1 && option!=2)
		{
			while(option!=1 && option!=2)
			{
				cout<< "Opción no válida, intente con otra."<<"\n";
				cout<< "Opción: ";
				cin>> option;
			}
		}
		if(option==1)
		{
			cout<< "Añadir, Seleccione la Columna: ";
			cin>> columna;
			while(game.columnFull(columna)==true || columna==0 || columna>8)
			{
				cout<< "Posición no válida, intente con otra."<<"\n";
				cout<< "Añadir, Seleccione la columna: ";
				cin>> columna;
			}
			game.addFicha(columna);
		}
		else if(option==2)
		{
			cout<< "Remover, Seleccione la Columna: ";
			cin>> columna;
			while(game.emptyColumn(columna)==true || columna==0 || columna>8)
			{
				cout<< "Posición no válida, intente con otra."<<"\n";
				cout<< "Remover, Seleccione la columna: ";
				cin>> columna;
			}
			game.pop(columna);
			game.bump(columna);
		}
		printPop();		
		printScreen(game, board1, board2);
		if(game.win()==true)
		{
			printPop();
			printScreen(game, board1, board2);
			cout<<" "<<"\n";
			delay(3);
			printWinner(game.getPlayer());
			string name;
			cout<< "Jugador"<< game.getPlayer()<<"\n";
			cout<<"Ingrese su nombre: ";
			cin>>name;
			if(game.getPlayer()==1)
			{
				board1.indexScore(name);
			}
			else if(game.getPlayer()==2)
			{
				board2.indexScore(name);
			}
		}
		else if(game.space()==false)
		{
			printDraw();
		}
		if(game.getPlayer()==1)
		{
			board1.nextTurn();
		}
		else if(game.getPlayer()==2)
		{
			board2.nextTurn();
		}
		game.changePlayer();
	}	
}


//Inicia un juego en el modo Row by row
void startRow()
{
	TableroRow game;
	ScoreBoard board1(1, 740);
	ScoreBoard board2(2, 740);
	printRow();
	printScreen(game, board1, board2);
	while(game.getEndGame()==false)
	{
		cout<< "\n";
		printPlayer(game.getPlayer());
		cout<< "Seleccione la columna: ";
		int columna;
		cin>> columna;
		while(game.columnFull(columna)==true || columna==0 || columna>8 || game.legalMove(columna)==false)
		{
	            	cout<< "Posición no válida, intente con otra."<<"\n";
			cout<< "Seleccione la columna: ";
			cin>> columna;
		}
		game.addFicha(columna);
		printRow();
		printScreen(game, board1, board2);
		if(game.win()==true)
		{
			printRow();
			printScreen(game, board1, board2);
			cout<<" "<<"\n";
			delay(3);
			printWinner(game.getPlayer());
			string name;
			cout<< "Jugador"<< game.getPlayer()<<"\n";
			cout<<"Ingrese su nombre: ";
			cin>>name;
			if(game.getPlayer()==1)
			{
				board1.indexScore(name);
			}
			else if(game.getPlayer()==2)
			{
				board2.indexScore(name);
			}
		}
		else if(game.space()==false)
		{
			printDraw();
		}
		if(game.getPlayer()==1)
		{
			board1.nextTurn();
		}
		else if(game.getPlayer()==2)
		{
			board2.nextTurn();
		}
		game.changePlayer();
	}
}


//Inicia un juego en el modo Connect 5
void startFive()
{
	TableroFive game;
	game.addapt();
	ScoreBoard board1(1, 750);
	ScoreBoard board2(2, 750);
	printFive();
	printScreenFive(game, board1, board2);
	while(game.getEndGame()==false)
	{
		cout<< "\n";
		printPlayer(game.getPlayer());
		cout<< "Seleccione la columna: ";
		int columna;
		cin>> columna;
		while(game.columnFull(columna)==true || columna<0 || columna>8)
		{
	            	cout<< "Posición no válida, intente con otra."<<"\n";
			cout<< "Seleccione la columna: ";
			cin>> columna;
		}
		game.addFicha(columna);
		printFive();
		printScreenFive(game, board1, board2);
		if(game.win()==true)
		{
			printFive();
			printScreenFive(game, board1, board2);
			cout<<" "<<"\n";
			delay(3);
			printWinner(game.getPlayer());
			string name;
			cout<< "Jugador"<< game.getPlayer()<<"\n";
			cout<<"Ingrese su nombre: ";
			cin>>name;
			if(game.getPlayer()==1)
			{
				board1.indexScore(name);
			}
			else if(game.getPlayer()==2)
			{
				board2.indexScore(name);
			}
		}
		else if(game.space()==false)
		{
			printDraw();
		}
		if(game.getPlayer()==1)
		{
			board1.nextTurn();
		}
		else if(game.getPlayer()==2)
		{
			board2.nextTurn();
		}
		game.changePlayer();
	}
}



//Inicia un juego estilo Quickgame
void startQuick()
{
	TableroQuick game;
	ScoreBoard board1(1, 330);
	ScoreBoard board2(2, 330);
	printQuick();
	printScreen(game, board1, board2);
	while(game.getEndGame()==false)
	{
		cout<< "\n";
		printPlayer(game.getPlayer());
		cout<< "Seleccione la columna: ";
		int columna;
		cin>> columna;
		while(game.columnFull(columna)==true || columna==0 || columna>8)
		{
	            	cout<< "Posición no válida, intente con otra."<<"\n";
			cout<< "Seleccione la columna: ";
			cin>> columna;
		}
		game.addFicha(columna);
		printQuick();
		printScreen(game, board1, board2);
		if(game.win()==true)
		{
			printQuick();
			printScreen(game, board1, board2);
			cout<<" "<<"\n";
			delay(3);
			printWinner(game.getPlayer());
			string name;
			cout<< "Jugador"<< game.getPlayer()<<"\n";
			cout<<"Ingrese su nombre: ";
			cin>>name;
			if(game.getPlayer()==1)
			{
				board1.indexScore(name);
			}
			else if(game.getPlayer()==2)
			{
				board2.indexScore(name);
			}
		}
		else if(game.space()==false)
		{
			printDraw();
		}
		if(game.getPlayer()==1)
		{
			board1.nextTurn();
		}
		else if(game.getPlayer()==2)
		{
			board2.nextTurn();
		}
		game.changePlayer();
	}
}



//Abre la lista de las mejores puntuaciones
void showScores()
{
	printHighs();
	List<string> points;
	points.load_file("scores.txt");
	points.print();
	cout<<"\n";
	delay(4); 
}
