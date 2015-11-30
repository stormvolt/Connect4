#ifndef TABLEROQUICK_H
#define TABLEROQUICK_H

#include"tablero.h"


class TableroQuick : public Tablero
{
	public:
		bool searchLine(int,int,int);
		bool win();
};

#endif
