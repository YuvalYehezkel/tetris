#include "TheGame.h"
#include "Board.h"
#include <conio.h>
//#include <iostream>

void TheGame::StartGame()//TODO- אמור להיות מודפס לוח ולהתחיל משחק
{
	Board b;
}

void TheGame::ContinueGame()//TODO- להמשיך את המשחק מהמקום שבו עצרנו
{
	system("cls");
}
void TheGame::ShowInstructions()
{
	std::cout << "Goal: You have to make full horizontal lines with the different shaped blocks that fall into the game area.Full lines will then disappear and Increases the chance of winning the game"<<endl;
	std::cout << "The player whose board is filled first loses, the other player wins";
	std::cout << "Controls:" << endl << "Player 1(The left player):" << endl << "'a' or 'A' key : move block to the left" << endl << "'d' or 'D' key : move block to the right" << endl << "'s' or 'S' key : rotate block clockwise" << endl << "'w' or 'W' key : rotate block counterclockwise" << endl << "'x' or 'X' key : move block down";
	std::cout << "Controls:" << endl << "Player 2(The right player):" << endl << "'j' or 'J' key : move block to the left" << endl << "'l' or 'L' key : move block to the right" << endl << "'k' or 'K' key : rotate block clockwise" << endl << "'i' or 'I' key : rotate block counterclockwise" << endl << "'m' or 'M' key : move block down";
}
void TheGame::ExitGame()
{
	system("cls");//not sure

}

void TheGame::ChooseOption()
{
	if (_getch() == '1')//TODO
		StartGame();
	if (_getch() == '2')//conitnue game cancel esc
		ContinueGame(); // TODO
	if (_getch() == '8')
		ShowInstructions();
	if (_getch() == '9')
		ExitGame();
}
