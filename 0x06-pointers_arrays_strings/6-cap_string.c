#include "holberton.h"
/**
  * cap_string - capitalize all words of a string (that meet criteria)
  * @s - input string
  * Return: pointer to s
  */

char *cap_string(char *str)
{
	int str_len = _strlen(str);
	int i = 0;
	char check[] = " \t\n,;.!?"(){}";

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (str[j] = str[i - 1])
						c[i] -= 32;
				}
			}
		}
	}
}
