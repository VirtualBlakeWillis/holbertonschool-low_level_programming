#include "main.h"

/**
  * puts_half - print second half of string
  * @str: input string
  * Return: void
  */

void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (*str)
	{
		i++;
		str++;
	}
	i--;
	if (i % 2 != 0)
		i--;
	i = i / 2;

	while (*str)
	{
		if (x >= i)
		{
			_putchar(*str);
		}
		x++;
		str++;
	}
}
