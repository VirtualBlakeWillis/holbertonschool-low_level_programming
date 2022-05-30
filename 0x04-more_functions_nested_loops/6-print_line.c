#include "main.h"

/**
  * print_line - print n _'s, where n = input
  * @n: number of _'s to print
  * Return: void
  */

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');

}
