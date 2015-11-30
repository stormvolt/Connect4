#ifndef TABLEROPOP_H
#define TABLEROPOP_H

#include"tablero.h"
#include"tablero.cpp"

class TableroPop : public Tablero
{
	public:
		bool empty();
		void pop(int);
		void bump(int);
		bool emptyColumn(int);
};

#endif
