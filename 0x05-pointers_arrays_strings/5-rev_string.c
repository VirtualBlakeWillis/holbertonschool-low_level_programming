#include "main.h"


/**
  * rev_string - prints a string normal, than in reverse
  * @s: string input
  * Return: void
  */

void rev_string(char *s)
{

	int i, n;
	
	i = 0;
	n = 0;

	while (*s++)
		i++;
	
	char x[i];




	/* reverse string code */
	while (*s)
	{
		_putchar(*s);
		i++;
	}

	s--;

	while (i > 0)
	{
		x[n] = s[i];
		n++;
		i--;
		s--;
	}
	_putchar('\n');
}
