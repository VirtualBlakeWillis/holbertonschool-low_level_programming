#include "main.h"
/**
  * puts2 - prints every other char in string
  * @str: input string
  * Return: void
  */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');

}
