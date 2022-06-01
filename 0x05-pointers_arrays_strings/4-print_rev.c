#include "main.h"
/**
  *
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
