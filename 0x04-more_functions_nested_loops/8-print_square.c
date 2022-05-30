#include "main.h"

/**
  * print_square - create a squre, n by n characters wide/long
  *@size: paramaters for width and legnth
  *Return: void
  */

void print_square(int size)
{
	int i, x, n;

	n = size;
	if (n > 0)
	{
		for (i = 0; i < n; i ++)
		{
			for (x = 0; x < n; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

