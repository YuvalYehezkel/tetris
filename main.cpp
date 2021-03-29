//#include "io_utils.h"
#include "Figure.h"
#define ESC 27
#include <conio.h>
#include "TheGame.h"


using namespace std;

//

int main()
{

	Board board1;
	//gotoxy(10, 10);// ברגע שיש גו טו איקס ווי עם בורד, התוכנית עפה, בלי שניהם ביחד עובד
	Figure f;
	//f.setBoard(&board1); // לא יודעת אם באמת צריך
	//f.printFigure();
	//board2.initBoard();
	/*gotoxy(1, 1);
	cout << getch;*/


	//clrScr();
	//_flushall();

	int x = 7, y = 1;

	while ((!_kbhit() || _getch() != ESC))
	{

		gotoxy(x, y);


		f.printFigure();

		Sleep(1000);
		gotoxy(x, y);
		if (y <= 11)
			cout << "    " << endl << endl;
		//++x;
		++y;
		if (y > 12)
			y = 1;



		//}
		//else if (_getch() == 'a' || _getch() == 'A' || _getch() == 'j' || _getch() == 'J')
		//{

		//}
		//else if (_getch() == 'a' || _getch() == 'A' || _getch() == 'j' || _getch() == 'J')
		//{

		//}
	}
	TheGame g; // ניסיון
	g.ShowInstructions();


	cout << endl << endl;
	return 0;
}
