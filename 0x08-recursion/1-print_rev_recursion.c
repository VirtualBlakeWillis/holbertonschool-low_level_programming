#include "main.h"

/**
  */

void _print_rev_recursion(char *s)
{
	int end = 0;

	if (!*s)
	{
		_putchar(*s);
		end = 1;
	}

	if (end == 0)
	{
		s++;
		_putchar(*s);
		_print_rev_recursion(s);
	}
	else
	{
		s--;
		_putchar(*s);
		
	}

}
