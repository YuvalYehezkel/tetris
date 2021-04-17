#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

enum { ROWS = 18, COLS = 12 };

class Board
{

	Point GameBoard[ROWS][COLS];

public:
	//ctor
	Board();
	void initBoard();
	void printMenu();
	bool isValidPoint(int a, int b)
	{
		GameBoard[b][a].Set_X(a);
		GameBoard[b][a].Set_Y(b);
		if ((a != 6 && b!=3) || (a != 18 && b != 1))
		{
			if ((!GameBoard[b][a].getIsBusy()) && (GameBoard[b][a].getChar() != '*') && a >= 1 && a != (COLS + 1) && a <= (COLS * 2 + 2) && b >= 1 && b <= ROWS)
				return true;
			return false;
		}
		else
			return true;
	}
	void turnToBusyPoint(int x, int y, char ch = '#')
	{
		gotoxy(x, y);
		cout << ch;
		GameBoard[y][x].SetPoint(x, y, true, ch);
		/*if (GameBoard[y][x].getChar() == '#')
			cout << "true1";
		else 
			cout << "false1";*/
		
	}
	void turnToFreePoint(int x, int y, char ch = ' ')
	{
		gotoxy(x, y);
		cout << ch;
		GameBoard[y][x].SetPoint(x, y, false, ch);
		/*if (GameBoard[y][x].getChar() == ' ')
			cout << "true2";
		else
			cout << "false2";*/

	}

};