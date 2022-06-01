#include "main.h"
#include <math.h>
#include <stdio.h>
/**
  * print_number - print an integer using _putchar
  * @n: input number to print
  * Return: void
  */

void print_number(int n)
{
	int i, bigNum;
	
	i = intSize(n);
	bigNum = n;
	_putchar(i + '0');
	
	if (n = 0)
		_putchar('0');
	else if (n > 0)
	{

		/* Greater Than 0 */
	}
	else
	{
		_putchar((bigNum / 10) + '0');
		/* Less Than 0 */
	}
}

int intSize(int x)
{
	x = abs(x);

	if (x >= 1000000000)
		return 10;
	else if (x >= 100000000)
		return 9;
	else if (x >= 10000000)
		return 8;
	else if (x >= 1000000)
		return 7;
	else if (x >= 100000)
		return 6;
	else if (x >= 10000)
		return 5;
	else if (x >= 1000)
		return 4;
	else if (x >= 100)
		return 3;
	else if (x >= 10)
		return 2;
	else
		return 1;
}
