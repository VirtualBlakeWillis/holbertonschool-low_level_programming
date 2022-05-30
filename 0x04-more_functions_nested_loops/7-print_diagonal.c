#include "main.h"

/**
  * print_diagonal - create a diagonal line, n lines long
  * @n: number of lines long
  * Return: void
  */

void print_diagonal(int n)
{
	int ln, i;

	ln = 1;
	if (n > 0)
	{
		while (n >= ln)
		{
			for (i = 1; i <= ln; i++)
			{
				if (i == ln)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
			ln++;
		}
	}
	else
		_putchar('\n');
}
