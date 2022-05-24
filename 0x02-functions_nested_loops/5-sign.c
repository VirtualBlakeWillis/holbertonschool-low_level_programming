#include "main.h"
/**
  * print_sign - check if input is +,-, or 0
  * @n: input of number
  *
  * Return: 1, 0, or -1
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
