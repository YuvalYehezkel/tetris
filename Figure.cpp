#include "Figure.h"

void Figure::Rotate()
{
	// אם המשתמש הכניס למעלה- הצורה מסתובבת, בשאר הכיוונים נשארת אותו דבר
}
void Figure::RightOrLeftOrdown()
{

}
void Figure::printFigure()
{

	for (int i = 0; i < rows; i++)
	{
		
		if (figure1[i] == 1)
			cout << '*';
		else
			cout << ' ';
	
	}
}

void Figure::initFigure()
{
	
	figure1[0] = 1;
	figure1[1] = 1;
	figure1[2] = 1;
	figure1[3] = 1;



}
void Figure::setBoard(Board* b1)//לא יודעת אם באמת צריך
{
	b = b1;
}
