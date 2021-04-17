#pragma once

#include "Board.h"
#include "Figure.h"
#include "Player.h"

enum menuKeys { START = '1', PAUSE = '2', INSTRUCTIO_KEYS = '8', EXIT = '9' };
enum { ESC = 27 };//escape
enum { RAND = 7 };

class TheGame
{
	Board GameBoard;
public:
	TheGame() {}; //ctor
	void setBoard()
	{
		GameBoard.initBoard();
	}

	Figure& createFigure(int numOfPlayer, int* serialNum);
	void RunGame();
	void ContinuePausedGame();
	void ShowInstructions();
	void clearKeyBoardBuffer();
	void MoveFigure(Board& board, Figure& f, int serialNum, char direction); // קוראת לפונקציות תזוזה לפי המקשים
	void ExitGame();
};