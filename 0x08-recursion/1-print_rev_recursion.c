#include "main.h"

/**
  * _print_rev_recursion - print a string in reverse, with recursion!
  * @s: input string
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_print_rev_recursion(&s[i]);
		_putchar(*s);
	}
	else
		return;
}
