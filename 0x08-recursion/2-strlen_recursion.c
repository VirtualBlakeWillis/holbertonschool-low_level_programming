#include "main.h"
/**
  */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s)
	{
		i++;
		i += _strlen_recursion(&s[i]);
		return (i);
	}
	else
		return (0);
}
