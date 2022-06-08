#include "main.h"

/**
  * _puts_recursion - use putchar in a recursive function
  * @s: string to putchar out
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

		_putchar(*s);
		s++;
		_puts_recursion(s);

}
