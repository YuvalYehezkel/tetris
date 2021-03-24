
#include "Board.h"
//#include "io_utils.h"
#include "Figure.h"
#define ESC 27


//

int main()
{
	Board board1;

	board1.initBoard();
	gotoxy(1, 2);
	Figure f;
	f.printFigure();
	
	//board2.initBoard();
	/*gotoxy(1, 1);
	cout << getch;*/

	////write text in 4 corners of the screan
	//clrScr();
	//gotoxy(10, 10);
	//std::cout << "at 10 10";
	//gotoxy(10,20);
	//std::cout << "at 10 20";
	//gotoxy(20, 10);
	//std::cout << "at 20 10";
	//gotoxy(20, 20);
	//std::cout << "at 20 20";
	//
	//clrScr();
	//_flushall();

	//int x = 1, y = 1;

	//while (!_kbhit() || _getch() != ESC)
	//{
	//	gotoxy(x, y);
	//	std::cout << "*" << std::endl;
	//	Sleep(500);
	//	gotoxy(x, y);
	//	std::cout << " "<<std::endl;
	//	++x;
	//	if (x > 79)
	//		x = 1;
	//	++y;
	//	if (y > 20)
	//		y = 1;
	//}
	//return 0;
}
