#include "Header.h"
struct Player
{
	string name;
	int Score;

	void FillHighScore()
	{
		name = "_______________";
		Score = 0;
	}
};
struct Figure
{
	int x1;
	int x2;
	int x3;
	int x4;
	int y1;
	int y2;
	int y3;
	int y4;

	void S()
	{
		x1 = 3;
		x2 = 2;
		x3 = 2;
		x4 = 1;
		y1 = 5;
		y2 = 5;
		y3 = 6;
		y4 = 6;

	}
	void I()
	{
		x1 = 3;
		x2 = 2;
		x3 = 1;
		x4 = 0;
		y1 = 6;
		y2 = 6;
		y3 = 6;
		y4 = 6;
	}
	void Z()
	{

		x1 = 3;
		x2 = 2;
		x3 = 2;
		x4 = 1;
		y1 = 6;
		y2 = 6;
		y3 = 5;
		y4 = 5;

	}
	void T()
	{

		x1 = 3;
		x2 = 2;
		x3 = 1;
		x4 = 2;
		y1 = 6;
		y2 = 6;
		y3 = 6;
		y4 = 5;
	}
	void L()
	{

		x1 = 3;
		x2 = 2;
		x3 = 1;
		x4 = 1;
		y1 = 6;
		y2 = 6;
		y3 = 6;
		y4 = 5;


	}
	void J()
	{

		x1 = 3;
		x2 = 2;
		x3 = 1;
		x4 = 1;
		y1 = 5;
		y2 = 5;
		y3 = 5;
		y4 = 6;

	}
	void O()
	{

		x1 = 2;
		x2 = 2;
		x3 = 1;
		x4 = 1;
		y1 = 5;
		y2 = 6;
		y3 = 5;
		y4 = 6;


	}

	void Position(int index, int &position)
	{
		if (index == 0)//I
		{
			if ((position == 0 || position == 2) && (fig[x1 - 2][y1 - 2]) == ' ' && (fig[x2 - 1][y2 - 1] == ' ') && (fig[x4 + 1][y4 + 1] == ' '))
			{
				//	CleanBeforSwap();
				x1 -= 2;
				y1 -= 2;

				x2 -= 1;
				y2 -= 1;

				x3 += 0;
				y3 += 0;

				x4 += 1;
				y4 += 1;
				position++;
			}
			else if ((position == 1 || position == 3) && (fig[x1 + 2][y1 + 2]) == ' ' && (fig[x2 + 1][y2 + 1] == ' ') && (fig[x4 - 1][y4 - 1] == ' '))
			{
				//	CleanBeforSwap();

				x1 += 2;
				y1 += 2;

				x2 += 1;
				y2 += 1;

				x3 += 0;
				y3 += 0;

				x4 -= 1;
				y4 -= 1;
				position++;
			}


		}
		else if (index == 1)//Z
		{
			if ((position == 0 || position == 2) && (fig[x1 - 2][y1]) == ' ' && (fig[x4 + 1][y4 + 1] == ' '))
			{
				x1 -= 2;

				x2 -= 1;
				y2 += 1;

				x4 += 1;
				y4 += 1;
				position++;
			}
			else if ((position == 1 || position == 3) && (fig[x1 + 2][y1]) == ' ' && (fig[x2 + 1][y2 - 1] == ' '))
			{
				x1 += 2;
				y1 -= 0;

				x2 += 1;
				y2 -= 1;

				x3 -= 0;
				y3 += 0;

				x4 -= 1;
				y4 -= 1;
				position++;

			}
		}
		else if (index == 2)//S
		{
			if ((position == 0 || position == 2) && (fig[x3 - 1][y3 + 1] == ' ') && (fig[x4][y4 + 2] == ' '))
			{
				x1 -= 1;
				y1 -= 1;

				x2 += 0;
				y2 -= 0;

				x3 -= 1;
				y3 += 1;

				x4 += 0;
				y4 += 2;
				position++;
			}
			else if ((position == 1 || position == 3) && (fig[x1 + 1][y1 + 1] == ' ') && (fig[x4][y4 - 2] == ' '))
			{

				x1 += 1;
				y1 += 1;

				x2 += 0;
				y2 -= 0;

				x3 += 1;
				y3 -= 1;

				x4 += 0;
				y4 -= 2;
				position++;
			}

		}
		else if (index == 3)//T
		{
			if (position == 0 && (fig[x3 + 1][y3 + 1] == ' '))
			{
				x1 -= 1;
				y1 -= 1;

				x2 += 0;
				y2 -= 0;

				x3 += 1;
				y3 += 1;

				x4 -= 1;
				y4 += 1;
				position++;
			}
			else if (position == 1 && (fig[x3 + 1][y3 - 1] == ' '))
			{
				x1 -= 1;
				y1 += 1;

				x2 -= 0;
				y2 -= 0;

				x3 += 1;
				y3 -= 1;

				x4 += 1;
				y4 += 1;
				position++;
			}

			else if (position == 2 && (fig[x3 - 1][y3 - 1] == ' '))
			{
				x1 += 1;
				y1 += 1;

				x2 -= 0;
				y2 += 0;

				x3 -= 1;
				y3 -= 1;

				x4 += 1;
				y4 -= 1;
				position++;
			}
			else if (position == 3 && (fig[x3 - 1][y3 + 1] == ' '))
			{
				x1 += 1;
				y1 -= 1;

				x2 += 0;
				y2 += 0;

				x3 -= 1;
				y3 += 1;

				x4 -= 1;
				y4 -= 1;

				position++;
			}
		}
		else if (index == 4)//L
		{
			if (position == 0 && (fig[x1 - 1][y1 - 1] == ' ') && (fig[x3 + 1][y3 + 1] == ' ') && (fig[x4][y4 + 2] == ' '))
			{
				x1 -= 1;
				y1 -= 1;

				x2 += 0;
				y2 -= 0;

				x3 += 1;
				y3 += 1;

				x4 -= 0;
				y4 += 2;
				position++;
			}
			else if (position == 1 && (fig[x1 - 1][y1 + 1] == ' ') && (fig[x3 + 1][y3 - 1] == ' ') && (fig[x4 + 2][y4] == ' '))
			{

				x1 -= 1;
				y1 += 1;

				x2 -= 0;
				y2 -= 0;

				x3 += 1;
				y3 -= 1;

				x4 += 2;
				y4 += 0;
				position++;
			}

			else if (position == 2 && (fig[x1 + 1][y1 + 1] == ' ') && (fig[x3 - 1][y3 - 1] == ' ') && (fig[x4][y4 - 2] == ' '))
			{
				x1 += 1;
				y1 += 1;

				x2 -= 0;
				y2 += 0;

				x3 -= 1;
				y3 -= 1;

				x4 += 0;
				y4 -= 2;
				position++;
			}
			else if (position == 3 && (fig[x1 + 1][y1 - 1] == ' ') && (fig[x3 - 1][y3 + 1] == ' ') && (fig[x4 - 2][y4] == ' '))
			{
				x1 += 1;
				y1 -= 1;

				x2 += 0;
				y2 += 0;

				x3 -= 1;
				y3 += 1;

				x4 -= 2;
				y4 -= 0;

				position++;
			}
		}
		else if (index == 5)//J
		{
			if (position == 0 && (fig[x1 - 1][y1 - 1] == ' ') && (fig[x3 + 1][y3 + 1] == ' ') && (fig[x4 + 2][y4] == ' '))
			{
				x1 -= 1;
				y1 -= 1;

				x2 += 0;
				y2 += 0;

				x3 += 1;
				y3 += 1;

				x4 += 2;
				y4 += 0;
				position++;
			}
			else if (position == 1 && (fig[x1 - 1][y1 + 2] == ' ') && (fig[x4][y4 - 1] == ' '))
			{
				x1 -= 1;
				y1 += 2;

				x2 -= 0;
				y2 += 1;

				x3 += 1;
				y3 -= 0;

				x4 += 0;
				y4 -= 1;
				position++;
			}

			else if (position == 2 && (fig[x1 + 2][y1 + 1] == ' ') && (fig[x4 - 1][y4] == ' '))
			{
				x1 += 2;
				y1 += 1;

				x2 += 1;
				y2 += 0;

				x3 -= 0;
				y3 -= 1;

				x4 -= 1;
				y4 -= 0;
				position++;
			}
			else if (position == 3 && (fig[x3 - 2][y3] == ' ') && (fig[x4 - 1][y4 + 1] == ' '))
			{
				x1 += 0;
				y1 -= 2;

				x2 -= 1;
				y2 -= 1;

				x3 -= 2;
				y3 -= 0;

				x4 -= 1;
				y4 += 1;

				position++;
			}
		}
	}

	void FillFigure()
	{
		fig[x1][y1] = '*';
		fig[x2][y2] = '*';
		fig[x3][y3] = '*';
		fig[x4][y4] = '*';
	}

	void SwapDown()
	{
		x1++;
		x2++;
		x3++;
		x4++;
	}
	void SwapLeft()
	{
		y1--;
		y2--;
		y3--;
		y4--;
	}
	void SwapRight()
	{
		y1++;
		y2++;
		y3++;
		y4++;
	}

	void Faling(int index, int position, bool &FallingFigure)//падінні фігури
	{

		if (index == 0)//I
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1 + 1][y1] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' ') && (fig[x3 + 1][y3] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}

		}
		else if (index == 1)//Z
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x3 + 1][y3] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x3 + 1][y3] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
		}
		else if (index == 2)//S
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x3 + 1][y3] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
		}
		else if (index == 3)//T
		{
			if (position == 0)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 1)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' ') && (fig[x3 + 1][y3] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 2)
			{
				if ((fig[x3 + 1][y3] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 3)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x3 + 1][y3] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
		}
		else if (index == 4)//L
		{

			if (position == 0)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 1)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' ') && (fig[x3 + 1][y3] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 2)
			{
				if ((fig[x3 + 1][y3] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 3)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
		}
		else if (index == 5)//J
		{

			if (position == 0)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 1)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 2)
			{
				if ((fig[x3 + 1][y3] == ' ') && (fig[x4 + 1][y4] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
			else if (position == 3)
			{
				if ((fig[x1 + 1][y1] == ' ') && (fig[x3 + 1][y3] == ' ') && (fig[x2 + 1][y2] == ' '))
				{
					SwapDown();
				}
				else
				{
					FallingFigure = false;
				}
			}
		}
		else if (index == 6)//O
		{
			if ((fig[x1 + 1][y1] == ' ') && (fig[x2 + 1][y2] == ' '))
			{
				SwapDown();
			}
			else
			{
				FallingFigure = false;
			}

		}


	}
	void InLeftSide(int index, int position, bool &FallingFigure)//зміщення вліво
	{

		if (index == 0)//I
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x3][y3 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 1 || position == 3)
			{
				if (fig[x1][y1 - 1] == ' ')
				{
					SwapLeft();
				}

			}

		}
		else if (index == 1)//Z
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x3][y3 - 1] == ' '))
				{
					SwapLeft();
				}

			}
		}
		else if (index == 2)//S
		{

			if (position == 0 || position == 2)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x3][y3 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x3][y3 - 1] == ' '))
				{
					SwapLeft();
				}

			}
		}
		else if (index == 3)//T
		{
			if (position == 0)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x3][y3 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 1)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 2)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x3][y3 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 3)
			{
				if ((fig[x3][y3 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
		}
		else if (index == 4)//L
		{

			if (position == 0)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 1)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 2)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x3][y3 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 3)
			{
				if ((fig[x3][y3 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
		}
		else if (index == 5)//J
		{

			if (position == 0)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x3][y3 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 1)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 2)
			{
				if ((fig[x1][y1 - 1] == ' ') && (fig[x2][y2 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
			else if (position == 3)
			{
				if ((fig[x3][y3 - 1] == ' ') && (fig[x4][y4 - 1] == ' '))
				{
					SwapLeft();
				}
			}
		}
		else if (index == 6)//O
		{
			if ((fig[x1][y1 - 1] == ' ') && (fig[x3][y3 - 1] == ' '))
			{
				SwapLeft();
			}

		}


	}
	void InRight(int index, int position, bool &FallingFigure)
	{

		if (index == 0)//I
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x3][y3 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 1 || position == 3)
			{
				if (fig[x4][y4 + 1] == ' ')
				{
					SwapRight();
				}

			}

		}
		else if (index == 1)//Z
		{
			if (position == 0 || position == 2)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x3][y3 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x2][y2 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}

			}
		}
		else if (index == 2)//S
		{

			if (position == 0 || position == 2)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 1 || position == 3)
			{
				if ((fig[x2][y2 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}

			}
		}
		else if (index == 3)//T
		{
			if (position == 0)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x3][y3 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 1)
			{
				if ((fig[x3][y3 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 2)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x3][y3 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 3)
			{
				if ((fig[x4][y4 + 1] == ' ') && (fig[x1][y1 + 1] == ' '))
				{
					SwapRight();
				}
			}
		}
		else if (index == 4)//L
		{

			if (position == 0)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x3][y3 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 1)
			{
				if ((fig[x3][y3 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 2)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 3)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
		}
		else if (index == 5)//J
		{

			if (position == 0)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 1)
			{
				if ((fig[x3][y3 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 2)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x2][y2 + 1] == ' ') && (fig[x3][y3 + 1] == ' '))
				{
					SwapRight();
				}
			}
			else if (position == 3)
			{
				if ((fig[x1][y1 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
				{
					SwapRight();
				}
			}
		}
		else if (index == 6)//O
		{
			if ((fig[x2][y2 + 1] == ' ') && (fig[x4][y4 + 1] == ' '))
			{
				SwapRight();
			}

		}
	}
	void InEnd(int index, int position, bool &FallingFigure)//S
	{
		for (int i = 0; FallingFigure != false; i++)
		{
			Faling(index, position, FallingFigure);
		}
	}

};

void Menu(Player* players, short sizeplayers);
void RandFigure(int index, Figure &figure);
void EndWaysFigure(Figure figura);
void HighScore(int Score, Player* players, short sizeplayers);
void ShowHighScore(Player* players, short sizeplayers);
void Game(Player *players, short &sizeplayers);



void MakeArena()//створюємо поле
{

	for (int i = 0; i < sizetemp; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (i == sizetemp - 1||i==0 || j == 0 || j == size2 - 1||j==5)
			{
				MenuTemp[i][j] = '#';

			}
			
			else
			{
				MenuTemp[i][j] = ' ';
			}
		}
	}


	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (i == size1 - 1 || j == 0 || j == size2 - 1)
			{
				fig[i][j] = '#';

			}

			else
			{
				fig[i][j] = ' ';
			}
		}
	}
}

void TempFigure(int indextemp)//записуємо темпову фігуру
{
	Figure temp;
	
	if (indextemp==0)//I
	{
		temp.x1 = 1;
		temp.y1 = 3;
		temp.x2 = 2;
		temp.y2 = 3;
		temp.x3 = 3;
		temp.y3 = 3;
		temp.x4 = 4;
		temp.y4 = 3;

	}
	else if (indextemp == 1)//S
	{
		temp.x1 = 1;
		temp.y1 = 2;
		temp.x2 = 2;
		temp.y2 = 2;
		temp.x3 = 2;
		temp.y3 = 3;
		temp.x4 = 3;
		temp.y4 = 3;
		
	}
	


	else if (indextemp == 2)//Z
	{
	
		temp.x1 = 3;
		temp.x2 = 2;
		temp.x3 = 2;
		temp.x4 = 1;
		temp.y1 = 3;
		temp.y2 = 3;
		temp.y3 = 2;
		temp.y4 = 2;
		
	}
	else if (indextemp == 3)//T
	{


		temp.x1 = 3;
		temp.x2 = 2;
		temp.x3 = 1;
		temp.x4 = 2;
		temp.y1 = 3;
		temp.y2 = 3;
		temp.y3 = 3;
		temp.y4 = 2;
	
	}
	else if (indextemp == 4)
	{
		temp.x1 = 3;
		temp.x2 = 2;
		temp.x3 = 1;
		temp.x4 = 1;
		temp.y1 = 3;
		temp.y2 = 3;
		temp.y3 = 3;
		temp.y4 = 2;

	}
	else if (indextemp == 5)
	{

		temp.x1 = 3;
		temp.x2 = 2;
		temp.x3 = 1;
		temp.x4 = 1;
		temp.y1 = 2;
		temp.y2 = 2;
		temp.y3 = 2;
		temp.y4 = 3;
	}
	else if (indextemp == 6)
	{
		
		temp.x1 = 3;
		temp.x2 = 3;
		temp.x3 = 2;
		temp.x4 = 2;
		temp.y1 = 2;
		temp.y2 = 3;
		temp.y3 = 2;
		temp.y4 = 3;

	}

	MenuTemp[temp.x1][temp.y1] = '*';
	MenuTemp[temp.x2][temp.y2] = '*';
	MenuTemp[temp.x3][temp.y3] = '*';
	MenuTemp[temp.x4][temp.y4] = '*';
}								  
void MenuTempClean()//очищуємо масив з темповою фігурою
{
	
	for (int i = 0; i < sizetemp; i++)
	{
		for (int j = 0; j < sizetemp; j++)
		{
			if (i == sizetemp - 1 || i == 0 || j == 0 || j == sizetemp - 1||j==5)
			{
				MenuTemp[i][j] = '#';

			}

			else
			{
				MenuTemp[i][j] = ' ';
			}
		}
	}
}
void ShowArena(int Score, int indextemp)//показуємо фігуру
{
	TempFigure(indextemp);

	for (int i = 0; i < sizetemp; i++)
	{
		for (int j= 0; j < sizetemp; j++)
		{
			cout << left<<setw(3)<<MenuTemp[i][j];

		}
		cout << endl;
		
	}
	cout << "\t     SCORE :: " << Score<<endl;
	for (int i = 0; i < size1; i++)
	{
		if (i >= 2)
		{
			for (int j = 0; j < size2; j++)
			{
				cout << left << setw(3) << fig[i][j];
			}
			cout << endl;
		}
	}
}

void RandFigure(int index, Figure &figure)//записуємо фігуру в стакан
{
	if (index == 0)
	{
		figure.I();
	}
	else if (index == 1)
	{
		figure.S();
	}
	else if (index == 2)
	{
		figure.Z();
	}
	else if (index == 3)
	{
		figure.T();
	}
	else if (index == 4)
	{
		figure.L();

	}
	else if (index == 5)
	{
		figure.J();
	}
	else if (index == 6)
	{
		figure.O();

	}
}

void CleanBeforSwap()//очищаємо фігуру перед її перезаписом
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (fig[i][j] == '*')
			{
				fig[i][j] = ' ';
			}
		}
	}
}

void EndWaysFigure(Figure figura)//якщо фігура впала перезаписуєм її
{
	fig[figura.x1][figura.y1] = 'X';
	fig[figura.x2][figura.y2] = 'X';
	fig[figura.x3][figura.y3] = 'X';
	fig[figura.x4][figura.y4] = 'X';
}

void EndGame(bool &endgame)//кінець гри
{
	for (int j = 0; j < size2; j++)
	{
		if (fig[2][j] == 'X')
		{
			endgame = false;
		}
	}
}

void CleanRad(int &Score)//перевірка чи є записані рядки
{
	int count = 0;
	for (int i = 0; i < size1; i++)
	{
		bool isFull = true;//для перевірки чи рядок заповненно повністю
		for (int j = 1; j < size2 - 1; j++)
		{
			if (fig[i][j] != 'X')
			{
				isFull = false;
				break;
			}
			else if (j == size2 - 2)
			{
				count++;
			}
		}

		if (isFull)
		{

			for (int j = 1; j < size2 - 1; j++)
			{
				fig[i][j] = ' ';
			}
			for (int j = 0; j < size1 - 1; j++)
			{
				if (j < i)
				{
					swap(fig[i], fig[j]);
				}

			}

		}
		

	}

	if (count == 1)
	{
		Score += 100;
	}
	else if (count == 2)
	{
		Score += 300;
	}
	else if (count == 3)
	{
		Score += 700;
	}
	else if (count == 4)
	{
		Score += 1500;
	}
}//Очистка рядка після заповнення

void HighScore(int Score, Player* players, short sizeplayers)
{
	Player temp;
	temp.Score = Score;//приймає рахунок поточного гравця

	ifstream fin;

	fin.open("HighScore.txt");

	for (int i = 0; i < sizeplayers; i++)
	{
		fin >> players[i].name;
		fin >> players[i].Score;
	}
	fin.close();

	ofstream fout;
	if (temp.Score > players[9].Score)//якщо рахунок поточного гравця більший за останій в масиві то перезаписуєм його
	{
		cout << endl;
		cout << "\t\tNAME : ";
		cin >> temp.name;

		players[sizeplayers - 1] = temp;

		for (int i = 0; i < sizeplayers - 1; i++)
		{
			for (int j = i + 1; j > 0; j--)
			{
				if (players[j].Score > players[j - 1].Score)
				{
					swap(players[j], players[j - 1]);

				}
				else break;
			}
		}
		for (int i = 0; i < sizeplayers; i++)
		{
			if (players[i].Score < 0)
			{
				players[i].FillHighScore();
			}
		}

		fout.open("HighScore.txt");

		for (int i = 0; i < sizeplayers; i++)
		{
			fout << players[i].name << " ";
			fout << players[i].Score << "\n";
		}
		fout.close();
	}
}
void ShowHighScore(Player* players, short sizeplayers)
{

	ifstream fin;//виймаємо дані з файлу

	fin.open("HighScore.txt");//відкриваєм його

	for (int i = 0; i < sizeplayers; i++)
	{
		fin >> players[i].name;
		fin >> players[i].Score;
	}//записуємо дані в масив
	fin.close();//закриваємо файл

	system("cls");

	TETRIS();

	cout << "\t\t\t\tHIGHSCORE\n";
	cout << "\t\t\tNAME ::\t\t\tSCORE :: \n";
	for (int i = 0; i < sizeplayers; i++)
	{
		cout << "\t\t\t" << left << setw(2) << i + 1 << ".) " << left << setw(15) << players[i].name << " ";
		cout << right << setw(7) << players[i].Score << "\n";//виводимо список рекордів
	}
	system("pause");
}
void Game(Player *players, short &sizeplayers)
{
	Figure figure;
	bool GameRun = true;
	bool FallingFigure = true;
	int Score = 0;
	int index = rand() % 7;
	int temp = 0;
	char action = ' ';
	int position = 0;
	int levels = 601;//для збереження часу у функції Sleep
	int countfigure = 0;//для запису кількості уже впадених фігур
	

	MakeArena();

	do
	{

		int temp = rand() % 7;//рандомимо наступну фігуру
		bool FallingFigure = true;//змінна для преаірки чи фігура моде ще падати

		RandFigure(index, figure);
		TempFigure(temp);//Показуємо наступну фігуру

		position = 0;

		do
		{
			Sleep(levels);
			system("cls");

			figure.FillFigure();//записуємо фігуру

			ShowArena(Score, temp);

			int i = 0;
			
			do//дозволяє виконувати три дій за один цикл падіння
			{
				if (_kbhit())
				{
					action = _getch();

					if (action == 'd' || action == 'D')
					{
						figure.InRight(index, position, FallingFigure);//зміщуємо вправо
					}

					else if (action == 'a' || action == 'A')
					{
						figure.InLeftSide(index, position, FallingFigure);//зміщуємо в ліво
					}
					else if (action == 'w' || action == 'W')
					{
					//	CleanBeforSwap();//очищаємо фігуру

						figure.Position(index, position);
						if (position > 3)
						{
							position = 0;
						}
					}
					else if (action == 's' || action == 'S')
					{
						figure.InEnd(index, position, FallingFigure);//падіння фігури в кінець стакану
					}
					else if (action == (int)27)//ESC кінець гри
					{
						GameRun = false;
						FallingFigure = false;
						break;
					}
					else if (action==(int)32)//SPACE пауза в грі
					{
						cout << "\t\tPAUSE\n\n\n";
						system("pause");
					}
				}

				cin.clear();
				fflush(stdin);

				i++;
			} while (i < 3);

			CleanBeforSwap();//очищаємо фігуру
			figure.Faling(index, position, FallingFigure);//функція падіння

		} while (FallingFigure);//поки фігура моде зміщуватись вниз

		countfigure++;//кількість фігур збільшуємо

		if (countfigure%10==0&&levels>100)//збільшення швидкості на рівнях
		{
			levels -= 100;
		}
		

		EndWaysFigure(figure);//перезаписуємо фігуру яка вже на дні

		CleanRad(Score);//перевірка чи є рядок який повністю записаний
		EndGame(GameRun);//перевірка на програщ
		Score += 100;//збільшуємо рахунок очок після падіння фігури
		
		MenuTempClean();//очищуємо темнове меню з наступною фігурою
		
		index = temp;//переприсвоюємо значення темпової фігури в наступну
	
	} while (GameRun);


	cout << "\t\tGAME OVER!!!";

	Sleep(1000);
	
	HighScore(Score, players, sizeplayers);//якщо рахунок більший за останій рекорд то перезаписуємо його 
	system("pause");
}
void TETRIS()
{
	cout << " ***********    **********    **********    **********    ****    **********" << endl;
	cout << " ***********    **********    **********    **********    ****    **********" << endl;
	cout << "    ****        ****             ****       ***    ***    ****    ****	  " << endl;
	cout << "    ****        **********       ****       ***    ***    ****    **********" << endl;
	cout << "    ****        **********       ****       **********    ****    **********" << endl;
	cout << "    ****        ****             ****       *******       ****          ****" << endl;
	cout << "    ****        **********       ****       *** *****     ****    **********" << endl;
	cout << "    ****        **********       ****       ***   ****    ****    **********" << endl;

}
void Menu(Player *players, short sizeplayers)
{
	int action;//дія меню
	bool Exit = true;
	int key = 0;//ключ для меню

	do {

		TETRIS();

		if (key == 0) cout << "-> NEW GAME" << endl;
		else  cout << "   NEW GAME" << endl;

		if (key == 1) cout << "-> HIGHSCORE" << endl;
		else  cout << "   HIGHSCORE" << endl;

		if (key == 2) cout << "-> EXIT" << endl;
		else  cout << "   EXIT" << endl;

		if (_kbhit)
		{
			action = _getch();
			if (action == 's' || action == 'S')
			{
				if (key == 2)
				{
					key = 0;
				}
				else
				{
					key++;
				}
			}
			else if (action == 'w' || action == 'W')
			{
				if (key == 0)
				{
					key = 2;
				}
				else
				{
					key--;
				}

			}
			else if (action == 'w' || action == 'W')
			{
				if (key == 0)
				{
					key = 2;
				}
				else
				{
					key--;
				}

			}
			else if (action == (int)13)//enter
			{

				if (key == 0)
				{
					Game(players, sizeplayers);
				}
				if (key == 1)
				{
					ShowHighScore(players, sizeplayers);

				}
				else if (key == 2)
				{
					Exit = false;
				}
			}
		}
		system("cls");
	} while (Exit);
}





int main()
{
	srand(time(0));



	Player players[10];//створюємо масив рекордів
	short sizeplayers = 10;//його розмір

	Menu(players, sizeplayers);//викликаємо меню

	system("pause");
}