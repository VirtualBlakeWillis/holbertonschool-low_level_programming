#include "main.h"
#include "2-strlen.c"
/**
  * puts_half - print second half of string
  * @str: input string
  * Return: void
  */

void puts_half(char *str)
{
	int c;
	int i = 0;


	i = _strlen(str);

	if (i % 2 == 1)
		i--;

	for (c = (i / 2); c <= i; c++)
	{
		_putchar(*(str + c));
	}

	_putchar('\n');
}
