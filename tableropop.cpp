#include "tableropop.h"

//Revisa si el tablero está vacío
bool TableroPop::empty()
{
    for(int i=1; i<8; i++)
    {
        if(map[6][i]!=0)
        {
            return false;
        }
    }
    return true;
}

//Revisa si la columna está vacía
bool TableroPop::emptyColumn(int column)
{
	if(map[6][column]==0)
	{
		return true;
	}
	else
	{
		return false;	
	}
}


//Permite eliminar las fichas del fondo
void TableroPop::pop(int columna)	
{
    map[6][columna] = 0;	
}


//Reacomoda las fichas tras haber quitado una
void TableroPop::bump(int columna)	
{
    int i = 6;
    bool end = false;
    while(end==false)
    {
        map[i][columna]=map[i-1][columna];
        i--;
        if(map[i][columna]==0 || i==1 )
        {
            end=true;
        }
        if(end==true)
        {
            map[i][columna]=0;
        }
    }
    
    map[i][columna] = 0;	
}
