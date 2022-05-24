#include "main.h"
/**
  * times_table - print 9 times table, starting with 0
  *
  * Return: void
  */
void times_table(void)
{
	int x, y, val;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			val = x * y;
			if (val >= 10)
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(val + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

