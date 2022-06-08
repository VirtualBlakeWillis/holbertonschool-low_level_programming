#include "main.h"

/**
  * print_chessboard - print a chessboard!
  * @a: 2D array of a board
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int x, i = 0;

	while (i < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[i][x]);
			x++;
		}
		i++;
		_putchar('\n');

	}
}
