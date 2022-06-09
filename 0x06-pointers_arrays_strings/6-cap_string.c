#include "holberton.h"
/**
  * cap_string - capitalize all words of a string (that meet criteria)
  * @str: input string
  * Return: pointer to s
  */

char *cap_string(char *str)
{
	int i = 0, j;
	char check[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (check[j] == str[i - 1])
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
