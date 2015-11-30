#include "scoreboard.h"


//Constructor del marcador inicial
ScoreBoard::ScoreBoard(int player_, int initialScore)
{
	score = initialScore;
	player = player_;
	turn = 1;
}



//Avanza el turno y disminuye el score
void ScoreBoard::nextTurn()
{
	turn++;
	score=score-10;
}

//Imprime el marcador
void ScoreBoard::printScore()
{
	cout<< "JUGADOR" << player;
	if(player==1)
	{
		cout<<" (o)";
	}
	else if(player==2)
	{
		cout<<" (+)";
	}
	cout<< " [" << score << "] " << "turno: " << turn << "\n";
}


//Función auxiliar de "indexScore()" para convertir un entero en string
string stringify(int number)
{    
	ostringstream ostr; 
	ostr << number; 
	string theNumberString = ostr.str(); 
	return theNumberString;
}



//Sobrecarga del operador + para sumar enteros y strings
string operator+(int number, string cadena)
{
	return stringify(number) + cadena;
}



//Indexa el puntaje del jugador a la base de datos
void ScoreBoard::indexScore(string name)
{
	name=":" + name;
	List<string> points;
	points.load_file("scores.txt");
	points.add_sort(score + name);
	if(points.getNum() > 10)
	{
		points.del_by_position(11);
	}
	points.save_file("scores.txt");
}
