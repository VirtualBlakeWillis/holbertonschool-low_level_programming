#include "main.h"
/**
  * print_alphabet_x10 - call function print_alphabet 10 times
  *
  * Return: nothing
  */
void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 0; i <= 9; i++)
	{
		for (b = 97; b <= 122; b++)
			_putchar(b);
		_putchar('\n');
	}

}
