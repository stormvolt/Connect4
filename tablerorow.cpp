#include "tablerorow.h"


//Nuevo constructor
TableroRow::TableroRow()
{
	currentRow = 6;
}




//Revisa si la fila en cuestión está llena
void TableroRow::rowfull()
{
	bool full = true;
	for(int i=1; i<8; i++)
	{
		if(map[currentRow][i]==0)
		{
			full = false;
		}
	}
	if(full==true)
	{
		currentRow=currentRow - 1;	
	}
}

//Determina si la jugada no rompe la nueva regla
bool TableroRow::legalMove(int columna)
{
	if(currentRow != searchFila(columna))
	{
		return false;
	}
	else
	{
		return true;
	}
}


//Sobrecarga del método addFicha
void TableroRow::addFicha(int columna)
{
		map[currentRow][columna]= playerInTurn;
		rowfull();	
}
