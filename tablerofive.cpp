#include "tablerofive.h"

using namespace std;

//Adapta el tablero para jugar Connect5
void TableroFive::addapt()
{
	for(int i=1; i<=6; i++)
	{
		map[i][0]=0;
		map[i][8]=0;
	}
}


//Sobrecarga para imprimir tablero
void TableroFive::printTablero()
{
	cout<<"    0  1  2  3  4  5  6  7  8"<<"\n";
	for(int i=0; i<8; i++)
	{
		cout<< "███";
		for(int j=0; j<9; j++)
		{
			if(map[i][j]==0)
			{
				cout<< "[ ]";
			}
			else if(map[i][j]==1)
			{
				//cout<< "[o]";
				cout<< "["<< "\031[1;33m®\033[0m"<<"]";
			}
			else if(map[i][j]==2)
			{
				//cout<< "[+]";
				cout<< "["<< "\033[1;33m®\033[0m"<<"]";
			}			
			else if(map[i][j]==3)
			{
				cout<< "[¶]";
			}	
			else if(map[i][j]==9)
			{
				cout<< "███";
			}			
		}
		cout<< "███";
		cout<< "\n";
	}
}


//Sobrecarga del auxiliar que busca en todas las direcciones(ahora ganas con 5)
bool TableroFive::searchLine(int direction, int i, int j)
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
		if(counter==5)
		{
			for(int i=0; i<5; i++)
			{
				int a=path.pop();
				map[a/10][a%10]=3;
			}
			return true;
		}
	}
	return false;
}

//Sobrecarga:Comprueba si un jugador ha ganado
bool TableroFive::win()
{
	for(int i=1; i<7; i++)
	{
		for(int j=0; j<=8; j++)
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

//Sobrecarga:Comprueba si aún hay espacio en el tablero
bool TableroFive::space()	
{
	bool full = true;
	for(int i=1; i<7; i++)
	{
		for(int j=0; j<=8; j++)
		{
			if(map[i][j]==0)
			{
				full = false;
			}
		}
	}
	if(full==true)
	{
		endGame = true;		
		return false;
	}
	else
	{
		return true;
	}
}	
