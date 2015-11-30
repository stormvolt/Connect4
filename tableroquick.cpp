#include "tableroquick.h"

//Sobrecarga de la función de búsqueda
bool TableroQuick::searchLine(int direction, int i, int j)
{
	bool endPath = false;
	int counter = 1;
	int posx = i;
	int posy = j;
	List<int> path;
	path.add_head(posx*10+posy);
	while(endPath==false)
	{
		if(direction==1)//En vertical
		{
			posx++;
		}
		else if(direction==2)//En horizontal
		{
			posy++;
		}
		else if(direction==3)//En diagonal derecha
		{
			posx++;
			posy++;
		}
		else if(direction==4)//En diagonal izquierda
		{
			posx++;
			posy--;
		}

		if(map[posx][posy]==playerInTurn)
		{
			path.add_head(posx*10+posy);//Guardamos las posición x,y en un solo número
			counter++;
		}
		else
		{
			endPath = true;
		}
		if(counter==3)
		{
			for(int i=0; i<3; i++)
			{
				int a=path.pop();
				map[a/10][a%10]=3;
			}
			return true;
		}
	}
	return false;
}


//Sobrecarga: Determinar ganador
bool TableroQuick::win()
{
	for(int i=1; i<7; i++)
	{
		for(int j=1; j<8; j++)
		{
			if(map[i][j]==playerInTurn)
			{
				if(searchLine(1,i,j)==true)//En vertical
				{
					endGame = true;					
					return true;
				}
				else if(searchLine(2,i,j)==true)//En horizontal
				{
					endGame = true;					
					return true;
				}
				else if(searchLine(3,i,j)==true)//En diagonal derecha
				{
					endGame = true;					
					return true;
				}
				else if(searchLine(4,i,j)==true)//En diagonal izquierda
				{
					endGame = true;					
					return true;
				}
			}
		}
	}
	return false;
}
