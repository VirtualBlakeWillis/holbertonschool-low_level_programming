#include "main.h"
/**
  * puts2 - prints every other char in string
  * @str: input string
  * Return: void
  */

void puts2(char *str)
{
	int i = 0;
	while (*str)
	{
		if ( i % 2 == 0)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');

}
