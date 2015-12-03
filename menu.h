#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "games.cpp"
#include "games.h"

class Menu
{
	private:
		bool stillAlive;
		char cursor;
	public:
		Menu();
		void startGame();
		void showMenu();
};

#endif
