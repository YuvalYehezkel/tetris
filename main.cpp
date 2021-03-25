//#include "io_utils.h"
#include "Figure.h"
#define ESC 27
#include <conio.h>
using namespace std;

//

int main()
{
	Board board1;
	gotoxy(10, 10);// ברגע שיש גו טו איקס ווי עם בורד, התוכנית עפה, בלי שניהם ביחד עובד
	Figure f;
	//f.setBoard(&board1); // לא יודעת אם באמת צריך
	//f.printFigure();
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

	int x = 1, y = 1;

	while ((!_kbhit()||_getch() != ESC) && y<13)
	{
		//if (!_kbhit())
		//{
			gotoxy(x, y);
			f.printFigure();
			cout << endl<<endl;
			Sleep(1000);
			gotoxy(x, y);
			if(y<=11)
				cout << "    " << endl<<endl;
			/*++x;
			if (x > 79)
				x = 1;*/
			++y;
			
		//}
		//else if (_getch() == 'a' || _getch() == 'A' || _getch() == 'j' || _getch() == 'J')
		//{

		//}
		//else if (_getch() == 'a' || _getch() == 'A' || _getch() == 'j' || _getch() == 'J')
		//{

		//}
	}
	return 0;
}
