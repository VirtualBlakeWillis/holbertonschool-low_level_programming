#include "holberton.h"

/**
  * string_toupper - capitalize every letter in str
  * @str: string to uppercase
  * Return: pointer to str
  */

char *string_toupper(char *str)
{
	int str_len = _strlen(str), i;

	for (i = 0; i < str_len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

/**
* _strlen - gets length of string
* @s: string to get length of
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
