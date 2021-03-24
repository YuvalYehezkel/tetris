#include "Board.h"
#include "gotoxy.h"

Board::Board()
{
	initBoard();
}
void Board::initBoard()
{
	for (int i = 0; i <= 2*ROWS + 2; i++)
	{
		for (int j = 0; j <= COLS + 1; j++)
		{
			if (j == 0 || j == COLS + 1  || i == 0 || i == ROWS + 1 || i == 2*ROWS + 2)
			{
				gotoxy(i, j);
				cout << '#';
			}

			else
			{
				gotoxy(i, j);
				cout << ' ';
			}

		}
	}

}
