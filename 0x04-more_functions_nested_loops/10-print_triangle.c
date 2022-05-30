#include "main.h"

/**
  * print_triangle - creates a right angle triangle, with the right angle in the bottom right of input size
  * @size - how big you want your favorite triangle
  * Return: void
  */

void print_triangle(int size)
{
	int i, x, spc;
	
	spc = size - 1;
	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < spc)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
			spc = spc - 1;
		}
	}
	else
		_putchar('\n');
}
