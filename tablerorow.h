#ifndef TABLEROROW_H
#define TABLEROROW_H

#include"tablero.h"


class TableroRow : public Tablero
{
	private:
		int currentRow;	
	public:
		TableroRow();
		~TableroRow(){};
		void rowfull();
		void addFicha(int);
		bool legalMove(int);
};

#endif
