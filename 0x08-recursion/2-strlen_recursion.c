#include "main.h"
/**
  * _strlen_recursion - get legnth of string, recursivly!
  * @s: string
  * Return: legnth of string
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(&s[i]);
		return (i);
	}
	else
		return (0);
}
