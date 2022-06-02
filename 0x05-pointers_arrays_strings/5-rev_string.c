#include "main.h"


/**
  * rev_string - prints a string normal, than in reverse
  * @s: string input
  * Return: void
  */

void rev_string(char *s)
{

	char tmp[512];
	int i, j;

	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(tmp + i) = *(s + i);
		i++;
	}
	i--;

	while (i >= 0)
	{
		*(s + i) = *(tmp + j);
		j++;
		i--;
	}
}
