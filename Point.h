#pragma once
#pragma once
#include "gotoxy.h"

class Point
{
	int x;
	int y;
	bool IsFreePos;
	char figure; //the sign of the shape
public:
	//ctor
	Point(int _x, int _y, bool _IsFreePos = true, char _figure = '*') :x(_x), y(_y), IsFreePos(_IsFreePos), figure(_figure) {};
	void draw() const
	{
		gotoxy(x, y);
		cout << figure;
	}
	int getX()const
	{
		return x;
	}
	int gety()const
	{
		return y;
	}
	char getFigure()const
	{
		return figure;
	}
	bool getIsFree()const
	{
		return IsFreePos;
	}

};

