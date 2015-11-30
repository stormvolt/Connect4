#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "tableropop.h"
#include "tableropop.cpp"
#include "tablerorow.h"
#include "tablerorow.cpp"
#include "tablerofive.h"
#include "tablerofive.cpp"
#include "tableroquick.h"
#include "tableroquick.cpp"
#include "scoreboard.h"
#include "scoreboard.cpp"


void delay(int);
void printTitle();
void printHighs();
void printMenu();
void printClassic();
void printPop();
void printRow();
void printFive();
void printQuick();
void printScreen(Tablero, ScoreBoard, ScoreBoard);
void printScreenFive(TableroFive, ScoreBoard, ScoreBoard);
void printWinner(int);
void printDraw();


#endif
