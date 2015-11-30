#ifndef BOARDSCORE_H
#define BOARDSCORE_H

#include <iostream>
#include <sstream> 
#include <string>
#include "list.h"
#include "list.cpp"

class ScoreBoard
{
	private:
		int score;
		int player;
		int turn;
	public:
		ScoreBoard(int, int);
		~ScoreBoard(){};
		void nextTurn();
		void printScore();		
		void indexScore(string);
};

#endif
