#include "graphics.h"
using namespace std;

//Permite retrasar una acción un determinado número de segundos
void delay(int secs) 
{
    for(time_t i = (time(NULL) + secs); time(NULL) != i;);
}

void printTitle()
{
cout<<"\n";
cout<<"a88888b.  .88888.  888888ba  888888ba  88888888b a88888b. d888888P    dP   dP "<<"\n";
cout<<"d8'   `88 d8'   `8b 88    `8b 88    `8b 88       d8'   `88    88      88   88  "<<"\n";
cout<<"88        88     88 88     88 88     88a88aaaa   88           88      88aaa88 "<<"\n";
cout<<"88        88     88 88     88 88     88 88       88           88           88 "<<"\n";
cout<<"Y8.   .88 Y8.   .8P 88     88 88     88 88       Y8.   .88    88           88"<<"\n";
cout<<" Y88888P'  `8888P'  dP     dP dP     dP 88888888P Y88888P'    dP           dP "<<"\n";
cout<<"\n";
cout<<"                                      8         o   o             "<<"\n";
cout<<"                                      8         8                 "<<"\n";
cout<<"           oPYo. .oPYo. o    o .oPYo. 8 o    o o8P o8 .oPYo. odYo."<<"\n";
cout<<"           8  `' 8oooo8 Y.  .P 8    8 8 8    8  8   8 8    8 8' `8"<<"\n";
cout<<"           8     8.     `b..d' 8    8 8 8    8  8   8 8    8 8   8"<<"\n";
cout<<"           8     `Yooo'  `YP'  `YooP' 8 `YooP'  8   8 `YooP' 8   8"<<"\n";
cout<<"\n";
cout<<"                                  ,ad8888ba,    "<<"\n";
cout<<"                                 d8^' .8 `^8b   "<<"\n";
cout<<"                                d8'  d'8   `8b  "<<"\n";
cout<<"                                88  d' 8    88  "<<"\n";
cout<<"                                88 Pooooooo 88  "<<"\n";
cout<<"                                Y8,    8   ,8P  "<<"\n";
cout<<"                                 Y8a.  8 .a8P   "<<"\n";
cout<<"                                  `^Y8888Y^'    "<<"\n";
}

void printMenu()
{
	system("clear");	
	cout<<"              ooo        ooooo                                   "<<"\n";
	cout<<"              `88.       .888'                                   "<<"\n";
	cout<<"               888b     d'888   .ooooo.  ooo. .oo.   oooo  oooo  "<<"\n";
	cout<<"               8 Y88. .P  888  d88' `88b `888P^Y88b  `888  `888  "<<"\n";
	cout<<"               8  `888'   888  888ooo888  888   888   888   888  "<<"\n";
	cout<<"               8    Y     888  888    .o  888   888   888   888  "<<"\n";
	cout<<"              o8o        o888o `Y8bod8P' o888o o888o  `V88V^V8P' "<<"\n";;
	cout<<"\n";
}


void printClassic()
{
	system("clear");
	cout<<"____ _    ____ ____ ____ _ ____ "<<"\n";
	cout<<"|    |    |__| [__  [__  | |    "<<"\n";
	cout<<"|___ |___ |  | ___] ___] | |___ "<<"\n";
	cout<<"\n";
}

void printPop()
{
	system("clear");
	cout<<"___  ____ ___     ____ _  _ ___ "<<"\n";
	cout<<"|__] |  | |__]    |  | |  |  |  "<<"\n";
	cout<<"|    |__| |       |__| |__|  | "<<"\n";
	cout<<"\n";
}

void printRow()
{
	system("clear");
	cout<<"____ ____ _ _ _    ___  _   _    ____ ____ _ _ _ "<<"\n";
	cout<<"|__/ |  | | | |    |__]  |_/     |__/ |  | | | | "<<"\n";
	cout<<"|  | |__| |_|_|    |__]   |      |  | |__| |_|_| "<<"\n";
	cout<<"\n";
}

void printFive()
{
	system("clear");
	cout<<"____ ____ _  _ _  _ ____ ____ ___      __  "<<"\n";
	cout<<"|    |  | || | || | |___ |     |      /_   "<<"\n";
	cout<<"|___ |__| | || | || |___ |___  |      __)  "<<"\n";
	cout<<"\n";
}

void printQuick()
{
	system("clear");
	cout<<"____ _  _ _ ____ _  _    ____ ____ _  _ ____ "<<"\n";
	cout<<"|  | |  | | |    |_/     | __ |__| |||| |___ "<<"\n";
	cout<<"|_|| |__| | |___ | |_    |__] |  | |  | |___ "<<"\n";
	cout<<"\n";
}


void printHighs()
{
	system("clear");
        cout<<"8   8 888 .d88b  8   8    .d88b. .d88b .d88b. 888b. 8888 .d88b. "<<"\n";
        cout<<"8www8  8  8P www 8www8    YPwww. 8P    8P  Y8 8  .8 8www YPwww. "<<"\n";
        cout<<"8   8  8  8b  d8 8   8        d8 8b    8b  d8 8wwK' 8        d8 "<<"\n";
        cout<<"8   8 888 `Y88P' 8   8    `Y88P' `Y88P `Y88P' 8  Yb 8888 `Y88P' "<<"\n";
	cout<<"\n";
}

//Imprime la pantalla de juego
void printScreen(Tablero board, ScoreBoard board1, ScoreBoard board2)
{
	board1.printScore();
	board2.printScore();
	cout<<"\n";
	board.printTablero();
}

//Imprime una pantalla de juego con los añadidos para connect 5
void printScreenFive(TableroFive board, ScoreBoard board1, ScoreBoard board2)
{
	board1.printScore();
	board2.printScore();
	cout<<"\n";
	board.printTablero();
}
	
	


void printWinner(int player)
{
	system("clear");
	if(player==1)
	{
		cout<<"            d8888b. db       .d8b.  db    db d88888b d8888b.    db "<<"\n";
		cout<<"            88  `8D 88      d8' `8b `8b  d8' 88'     88  `8D   o88 "<<"\n",
		cout<<"            88oodD' 88      88ooo88  `8bd8'  88ooooo 88oobY'  o 88 "<<"\n";
		cout<<"            88~~~   88      88~~~88    88    88~~~~~ 88`8b      88 "<<"\n";
		cout<<"            88      88booo. 88   88    88    88.     88 `88.    88 "<<"\n";
		cout<<"            88      Y88888P YP   YP    YP    Y88888P 88   YD    VP "<<"\n";
		cout<<"\n";
	}
	else if(player==2)
	{
		cout<<"            d8888b. db       .d8b.  db    db d88888b d8888b.  .d888b. "<<"\n";
		cout<<"            88  `8D 88      d8' `8b `8b  d8' 88'     88  `8D  VP  `8D "<<"\n",
		cout<<"            88oodD' 88      88ooo88  `8bd8'  88ooooo 88oobY'      odD' "<<"\n";
		cout<<"            88~~~   88      88~~~88    88    88~~~~~ 88`8b      .88' "<<"\n";
		cout<<"            88      88booo. 88   88    88    88.     88 `88.   j88. "<<"\n";
		cout<<"            88      Y88888P YP   YP    YP    Y88888P 88   YD   888888D "<<"\n";
		cout<<"\n";
	}
	cout<<"                    db   d8b   db d888888b d8b   db .d8888. "<<"\n";
	cout<<"                    88   I8I   88   `88'   888o  88 88'  YP "<<"\n";
	cout<<"                    88   I8I   88    88    88V8o 88 `8bo.   "<<"\n";
	cout<<"                    Y8   I8I   88    88    88 V8o88   `Y8b. "<<"\n";
	cout<<"                    `8b d8'8b d8'   .88.   88  V888 db   8D "<<"\n";
	cout<<"                     `8b8' `8d8'  Y888888P VP   V8P `8888Y' "<<"\n";
	cout<<" "<<"\n";
	delay(3);
	system("clear");
}

void printDraw()
{
	system("clear");
	cout<<"         oooooooooo.   ooooooooo.         .o.    oooooo   oooooo     oooo "<<"\n";
	cout<<"         `888'   `Y8b  `888   `Y88.      .888.    `888.    `888.     .8'  "<<"\n";
	cout<<"          888      888  888   .d88'     .8^888.    `888.   .8888.   .8'   "<<"\n";
	cout<<"          888      888  888ooo88P'     .8' `888.    `888  .8'`888. .8'    "<<"\n";
	cout<<"          888      888  888`88b.      .88ooo8888.    `888.8'  `888.8'     "<<"\n";
	cout<<"          888     d88'  888  `88b.   .8'     `888     `888'    `888'      "<<"\n";
	cout<<"         o888bood8P'   o888o  o888o o88o     o8888o    `8'      `8'       "<<"\n";
	cout<<" "<<"\n";
	delay(3);
	system("clear");
}

