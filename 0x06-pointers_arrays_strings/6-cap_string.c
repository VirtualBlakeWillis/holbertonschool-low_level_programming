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
		if (checkFor(str[i]) == 1)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i+ 1] - 32;
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
int checkFor(int val)
{
	switch (val)
	{
		case 9:
			return 1;
			break;
		case 10:
			return 1;
			break;
		case 32:
			return 1;
			break;
		case 33:
			return 1;
			break;
		case 34:
			return 1;
			break;
		case 40:
			return 1;
			break;
		case 41:
			return 1;
			break;
		case 44:
			return 1;
			break;
		case 46:
			return 1;
			break;
		case 59:
			return 1;
			break;
		case 63:
			return 1;
			break;
		case 123:
			return 1;
			break;
		case 125:
			return 1;
			break;
		default:
			return 0;
			break;
	}
}
