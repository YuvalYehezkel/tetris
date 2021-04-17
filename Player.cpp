#include "Player.h"

//
//void Point::changeDirection()
//{
//	if (direction == 'A' || direction == 'a')
//	{
//		dirx = -1;
//		diry = 0;
//	}
//	else if (direction == 'D' || direction == 'd')
//	{
//		LPlayer_moveRight();
//	}
//	else if (direction == 'L' || direction == 'l')
//	{
//		LPlayer_rotateRight();
//	}
//	else if (direction == 'L' || direction == 'l')
//	{
//		LPlayer_rotateLeft();
//	}
//	else if (direction == 'J' || direction == 'j')
//	{
//		dirx = -1;
//		diry = 0;
//	}
//	else if (direction == 'L' || direction == 'l')
//	{
//		RPlayer_moveRight();
//	}
//	else if (direction == 'K' || direction == 'k')
//	{
//		RPlayer_rotateRight();
//	}
//	else if (direction == 'I' || direction == 'i')
//	{
//		RPlayer_rotateLeft();
//	}
//	// 10% of cases we will change dir
//	if (rand() % 10 == 0)
//	{
//		int dir = rand() % 4;
//		switch (dir)
//		{
//		case 0: // UP
//			dirx = 0;
//			diry = -1;
//			break;
//		case 1: // DOWN
//			dirx = 0;
//			diry = 1;
//			break;
//		case 2: // LEFT
//			dirx = -1;
//			diry = 0;
//			break;
//		case 3: // RIGHT
//			dirx = 1;
//			diry = 0;
//			break;
//		}
//	}
//}
//
//void Point::move()
//{
//	// changeDirection might decide not to change
//	// (in fact, it will usually stay in the same direction)
//	changeDirection();
//	x += dirx;
//	y += diry;
//	if (x > max_x)
//	{
//		x = min_x;
//	}
//	else if (x < min_x)
//	{
//		x = max_x;
//	}
//	if (y > max_y)
//	{
//		y = min_y;
//	}
//	else if (y < min_y)
//	{
//		y = max_y;
//	}
//}