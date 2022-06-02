#include "main.h"
/**
  * print_rev - print input string in reverse
  * @s: input string
  * Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	s--;
	while (i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
