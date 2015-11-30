#include "menu.cpp"
#include "menu.h"

using namespace std;

int main()
{
	system("clear");	
	printTitle();
	cout<<" "<<"\n";
	delay(4);
	system("clear");
	Menu newMenu;
	newMenu.startGame();
	return 1;
}
