#include "Figure.h"

void Figure::printFigure(Board& board)
{

	for (Point& p : FigureBody)
	{
		if (board.isValidPoint(p.getX(), p.gety()))
		{
			board.turnToBusyPoint(p.getX(), p.gety());
		}

	}

	//switch (serialNum) //0-6
	//{
	//case SHAPES::LINE:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;
	//}
	//case SHAPES::L:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;

	//}
	//case SHAPES::RL:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;
	//}
	//case SHAPES::SQUARE:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;

	//}
	//case SHAPES::Z:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;
	//}
	//case SHAPES::RZ:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;
	//}
	//case SHAPES::PLUS:
	//{
	//	for (Point& p : FigureBody)
	//	{
	//		if (board.isValidPoint(p.getX(), p.gety()))
	//		{
	//			board.turnToBusyPoint(p.getX(), p.gety());
	//		}

	//	}
	//	break;

	//}
	//}
	
}



void Figure::initFigureBySerialNum(int serial_num_of_figure, int x, int y)
{

	switch (serial_num_of_figure) //1-7
	{
	case SHAPES::LINE:
	{

		for (int j = 0; j < SIZE; j++)
		{
			FigureBody[j].SetPoint(x + j, y, true, '#');

		}
		break;

	}

	case SHAPES::L:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x + 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 2, y + 1, true, '#');

		break;
	}
	case SHAPES::RL://reversed L
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x - 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x - 2, y + 1, true, '#');

		break;
	}
	case SHAPES::SQUARE:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x + 1, y, true, '#');
		FigureBody[2].SetPoint(x, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 1, y + 1, true, '#');

		break;
	}
	case SHAPES::Z:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x + 1, y, true, '#');
		FigureBody[2].SetPoint(x + 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 2, y + 1, true, '#');

		break;
	}


	case SHAPES::RZ://reversed Z
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x + 1, y, true, '#');
		FigureBody[2].SetPoint(x, y + 1, true, '#');
		FigureBody[3].SetPoint(x - 1, y + 1, true, '#');

		break;
	}

	case SHAPES::PLUS:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x - 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 1, y + 1, true, '#');

		break;
	}

	}

}
void Figure::updateFigureDrop(Board& board, int serialNum)
{
	bool valid = true;

	switch (serialNum)
	{
	case SHAPES::LINE:
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}
	case SHAPES::L:
	{
		for (int i = 1; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}
	case SHAPES::RL:
	{
		for (int i = 1; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}
	case SHAPES::SQUARE:
	{
		for (int i = 2; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}
	case SHAPES::Z:
	{
		for (int i = 2; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}
	case SHAPES::RZ:
	{
		for (int i = 2; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}
	case SHAPES::PLUS:
	{
		for (int i = 1; i < SIZE; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX(), FigureBody[i].gety() + 1)))
			{
				valid = false;
				break;
			}

		}
		break;
	}

	}
	if (valid == true)
	{
		// free the 
		for (int i = 0; i < SIZE; i++)
		{
			board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
		}
		FigureBody[0].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1, true, '#');
		FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety() + 1, true, '#');
		FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety() + 1, true, '#');
		FigureBody[3].SetPoint(FigureBody[3].getX(), FigureBody[3].gety() + 1, true, '#');
	}
}

void Figure::updateFigureLeft(Board& board, int serialNum)
{
	bool valid = true;

	switch (serialNum)
	{
	case SHAPES::LINE:
	{
		
			if (!(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety())))
			{
				valid = false;
				break;
			}

		
	}
	case SHAPES::L:
	{
		for (int i = 0; i < 2; i++)
		{
			if (!(board.isValidPoint(FigureBody[i].getX() - 1, FigureBody[i].gety())))
			{
				valid = false;
				break;
			}
		}

		
		break;
	}
	case SHAPES::RL:
	{
		if ((!(board.isValidPoint(FigureBody[3].getX() - 1, FigureBody[3].gety()))) || (!(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety()))))
		{
			valid = false;
			break;
		}



		break;
	}
	case SHAPES::SQUARE:
	{
		
		if ((!(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety()))) || (!(board.isValidPoint(FigureBody[2].getX() - 1, FigureBody[2].gety()))))
		{
			valid = false;
			break;
		}

		
		break;
	}
	case SHAPES::Z:
	{
		
		if ((!(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety()))) || (!(board.isValidPoint(FigureBody[2].getX() - 1, FigureBody[2].gety()))))
		{
			valid = false;
			break;
		}

		
		break;
	}
	case SHAPES::RZ:
	{
		
		if ((!(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety()))) || (!(board.isValidPoint(FigureBody[3].getX() - 1, FigureBody[3].gety()))))
		{
			valid = false;
			break;
		}

		
		break;
	}
	case SHAPES::PLUS:
	{
		
		if ((!(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety()))) || (!(board.isValidPoint(FigureBody[2].getX() - 1, FigureBody[2].gety()))))
		{
			valid = false;
			break;
		}

		
		break;
	}

	}
	if (valid == true)
	{
		// free the 
		for (int i = 0; i < SIZE; i++)
		{
			board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
		}
		FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety(), true, '#');
		FigureBody[1].SetPoint(FigureBody[1].getX() - 1, FigureBody[1].gety(), true, '#');
		FigureBody[2].SetPoint(FigureBody[2].getX() - 1, FigureBody[2].gety(), true, '#');
		FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety(), true, '#');
	}
}
void Figure::updateFigureRight(Board& board, int serialNum)
{
	bool valid = true;

	switch (serialNum)
	{
	case SHAPES::LINE:
	{

		if (!(board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[0].gety())))
		{
			valid = false;
			break;
		}


	}
	case SHAPES::L:
	{
		
		if ((!(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety()))) && (!(board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety()))))
		{
			valid = false;
			break;
		}
		


		break;
	}
	case SHAPES::RL:
	{
		if ((!(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety()))) && (!(board.isValidPoint(FigureBody[1].getX() + 1, FigureBody[1].gety()))))
		{
			valid = false;
			break;
		}



		break;
	}
	case SHAPES::SQUARE:
	{

		if ((!(board.isValidPoint(FigureBody[1].getX() + 1, FigureBody[1].gety()))) && (!(board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety()))))
		{
			valid = false;
			break;
		}


		break;
	}
	case SHAPES::Z:
	{

		if ((!(board.isValidPoint(FigureBody[1].getX() + 1, FigureBody[1].gety()))) && (!(board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety()))))
		{
			valid = false;
			break;
		}


		break;
	}
	case SHAPES::RZ:
	{

		if ((!(board.isValidPoint(FigureBody[1].getX() + 1, FigureBody[1].gety()))) && (!(board.isValidPoint(FigureBody[2].getX() + 1, FigureBody[2].gety()))))
		{
			valid = false;
			break;
		}


		break;
	}
	case SHAPES::PLUS:
	{

		if ((!(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety()))) && (!(board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety()))))
		{
			valid = false;
			break;
		}


		break;
	}

	}
	if (valid == true)
	{
		// free the 
		for (int i = 0; i < SIZE; i++)
		{
			board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
		}
		FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety(), true, '#');
		FigureBody[1].SetPoint(FigureBody[1].getX() + 1, FigureBody[1].gety(), true, '#');
		FigureBody[2].SetPoint(FigureBody[2].getX() + 1, FigureBody[2].gety(), true, '#');
		FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety(), true, '#');
	}
}

void Figure::updateFigureRotateClockWise(Board& board, int serialNum)
{
	switch (serialNum)
	{
	case SHAPES::LINE:
	{
		switch (RotateNum)
		{
		case 0:
		{

			if ((board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() - 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 2)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 2, true, '#');
				RotateNum = 1;

			}
			break;
		}
		case 1:
		{
			if ((board.isValidPoint(FigureBody[0].getX() - 2, FigureBody[0].gety() + 2)) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2)) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 2)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 2, FigureBody[0].gety() + 2, true, '#');
				FigureBody[1].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 2, true, '#');
				RotateNum = 2;

			}
			break;
		}
		case 2:
		{
			if ((board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 2)) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 2, true, '#');
				FigureBody[1].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				RotateNum = 3;
			}
			break;
		}
		case 3:
		{
			if ((board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 1)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 1, true, '#');
				RotateNum = 0;
			}
			break;
		}

		}

	}
	case SHAPES::L:
	{

		switch (RotateNum)
		{
		case 0:
		{

			if ((board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety())) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety())) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 2)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety(), true, '#');
				FigureBody[1].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 2, true, '#');
				RotateNum = 1;

			}
			break;
		}
		case 1:
		{
			if ((board.isValidPoint(FigureBody[0].getX() - 2, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() + 2)))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 2, FigureBody[0].gety() + 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() + 2, true, '#');
				RotateNum = 2;

			}
			break;
		}
		case 2:
		{
			if ((board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1, true, '#');
				RotateNum = 3;
			}
			break;
		}
		case 3:
		{
			if ((board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety())) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety(), true, '#');
				FigureBody[1].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				RotateNum = 0;
			}
			break;
		}

		}
	}
	case SHAPES::RL:
	{
		switch (RotateNum)
		{
		case 0:
		{

			if ((board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety())) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2)) &&
				(board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() + 2)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety(), true, '#');
				FigureBody[1].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2, true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() + 2, true, '#');
			}
			RotateNum = 1;
			break;
		}
		case 1:
		{
			if ((board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2)))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 2, true, '#');
				RotateNum = 2;

			}
			break;
		}
		case 2:
		{
			if ((board.isValidPoint(FigureBody[0].getX() - 2, FigureBody[0].gety() - 1)) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() - 1)) &&
				(board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 2, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1, true, '#');
				RotateNum = 3;
			}
			break;
		}
		case 3:
		{
			if ((board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety())) &&
				(board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 1)) &&
				(board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1)))
			{

				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety(), true, '#');
				FigureBody[1].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() + 1, true, '#');
				RotateNum = 0;
			}
			break;
		}

		}




	}
	case SHAPES::SQUARE:
	{
		//the same
		break;
	}

	case SHAPES::Z:
	{
		switch (RotateNum)
		{
		case 0:
		{
			if (board.isValidPoint(FigureBody[0].getX() + 2, FigureBody[0].gety()) &&
				board.isValidPoint(FigureBody[1].getX() + 1, FigureBody[1].gety() + 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety(), true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX() + 1, FigureBody[1].gety() + 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() + 1, true, '#');

				RotateNum = 1;
			}
			break;
		}
		case 1:
		{
			if (board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() + 2) &&
				board.isValidPoint(FigureBody[1].getX() - 1, FigureBody[1].gety() + 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 2, FigureBody[0].gety() + 2, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX() - 1, FigureBody[1].gety() + 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() - 1, true, '#');

				RotateNum = 2;
			}
			break;

		}
		case 2:
		{
			if (board.isValidPoint(FigureBody[0].getX() - 2, FigureBody[0].gety()) &&
				board.isValidPoint(FigureBody[1].getX() - 1, FigureBody[1].gety() - 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 2, FigureBody[0].gety(), true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX() - 1, FigureBody[1].gety() - 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() - 1, true, '#');

				RotateNum = 3;
			}
			break;
		}
		case 3:
		{
			if (board.isValidPoint(FigureBody[0].getX(), FigureBody[0].gety() - 2) &&
				board.isValidPoint(FigureBody[1].getX(), FigureBody[1].gety() - 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX(), FigureBody[0].gety() - 2, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety() - 1, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() + 1, true, '#');

				RotateNum = 0;
			}
			break;
		}
		}

		break;
	}
	case SHAPES::RZ:
	{
		switch (RotateNum)
		{
		case 0:
		{
			if (board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1) &&
				board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() - 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety() + 2, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() - 1, true, '#');

				RotateNum = 1;
			}
			break;
		}
		case 1:
		{
			if (board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1) &&
				board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() + 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX() - 2, FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() + 1, true, '#');

				RotateNum = 2;
			}
			break;

		}
		case 2:
		{
			if (board.isValidPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() - 1) &&
				board.isValidPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() + 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety() - 2, true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() + 1, true, '#');

				RotateNum = 3;
			}
			break;
		}
		case 3:
		{
			if (board.isValidPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1) &&
				board.isValidPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() - 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX() + 2, FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX(), FigureBody[2].gety(), true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() - 1, true, '#');

				RotateNum = 0;
			}
			break;
		}
		}

		break;
	}
	case SHAPES::PLUS:
	{
		switch (RotateNum)
		{
		case 0:
		{
			if (board.isValidPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() + 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX() + 1, FigureBody[2].gety() - 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() + 1, true, '#');

				RotateNum = 1;
			}
			break;
		}
		case 1:
		{
			if (board.isValidPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() - 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() + 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX() + 1, FigureBody[2].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() - 1, FigureBody[3].gety() - 1, true, '#');


				RotateNum = 2;
			}
			break;

		}
		case 2:
		{
			if (board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() - 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() - 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX() - 1, FigureBody[2].gety() + 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() - 1, true, '#');


				RotateNum = 3;
			}
			break;
		}
		case 3:
		{
			if (board.isValidPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() + 1))
			{
				for (int i = 0; i < SIZE; i++)
				{
					board.turnToFreePoint(FigureBody[i].getX(), FigureBody[i].gety());
				}
				FigureBody[0].SetPoint(FigureBody[0].getX() + 1, FigureBody[0].gety() - 1, true, '#');
				FigureBody[1].SetPoint(FigureBody[1].getX(), FigureBody[1].gety(), true, '#');
				FigureBody[2].SetPoint(FigureBody[2].getX() - 1, FigureBody[2].gety() - 1, true, '#');
				FigureBody[3].SetPoint(FigureBody[3].getX() + 1, FigureBody[3].gety() + 1, true, '#');

				RotateNum = 0;
			}
			break;
		}
		}

		break;
	}

	}
}

