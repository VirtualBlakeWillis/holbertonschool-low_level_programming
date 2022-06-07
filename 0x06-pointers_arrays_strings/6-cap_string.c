#include "holberton.h"
/**
  * cap_string - capitalize all words of a string (that meet criteria)
  * @s - input string
  * Return: pointer to s
  */

char *cap_string(char *str)
{
	int str_len = _strlen(str);
	int i;

	for (i = 0; i < str_len; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t') || \
				(str[i] == '\n' || str[i] == ',') || \
				(str[i] == ';' || str[i] == '.' ) || \
		   		(str[i] == '!' || str[i] == '"' ) || \
				(str[i] == '(' || str[i] == ')' ) || \
				(str[i] == '{' || str[i] == '}'))
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}

		i++;
	}
	return str;
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
/**
  * checkFor - checks conditions
  * @val: input value
  * Return: true of false
  */
bool checkVal(int val)
{

}
