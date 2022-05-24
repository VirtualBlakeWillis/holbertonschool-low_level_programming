#include "main.h"
/**
  * print_alphabet - prints the lowercase alphabet, followed by a newline
  *
  * Return: void
  */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
