#pragma once
#include "Board.h"
#include <iostream>

class Figure
{
	enum { SIZE = 4 };
	char Body[SIZE]; //7 figures ****  **   *       *     **     *     **
	////////////////////////////////// **   ***   ***    **     ***     **
	char direction; 
	int rows = 4;
	//int cols = 4;
	int figure1[4];// מחלקה נפרדת לצורה 1 וצורה 2
	//char figure2[2][3] = { {1,0,0},{ };
	Board *b; //לא יודעת אם באמת צריך
public:
	//ctor
	Figure()
	{
		initFigure();
	};
	void initFigure();
	void Rotate();//Rotate is up- kbhit בלחיצה ימינה אני צריכה להזיז את הקורדינטות ימינה
	void RightOrLeftOrdown();
	void printFigure();
	void setBoard(Board* b1);//לא יודעת אם באמת צריך

};
