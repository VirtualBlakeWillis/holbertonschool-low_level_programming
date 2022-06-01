#include "main.h"
/**
  * _puts - takes input string, returns it to stdout using _putchar
  * @str: input string
  * Return: void
  */

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
