#ifndef TABLEROFIVE_H
#define TABLEROFIVE_H

#include"tablero.h"


class TableroFive : public Tablero
{
	public:
		void addapt();
		void printTablero();
		bool searchLine(int,int,int);
		bool win();
		bool space();
};

#endif
