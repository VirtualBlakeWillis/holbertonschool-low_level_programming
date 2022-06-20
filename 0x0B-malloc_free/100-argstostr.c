#include "main.h"

/**
  * argstostr - convert input arguments to concatonated string
  * @ac: # of arguments
  * @av: array of arrays
  * Return: pointer to concatonated string
  */

char *argstostr(int ac, char **av)
{
	int total_len = 0, i = 0, tot;
	unsigned long x;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		total_len += strlen(av[i]);
		total_len += 1;
		i++;
	}

	s = malloc(sizeof(char) * total_len + 1);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	i = 0;
	tot = 0;
	while (i < ac)
	{
		for (x = 0; x < strlen(av[i]); x++)
		{
			s[tot] = av[i][x];
			tot++;
		}
		s[tot] = '\n';
		i++;
		tot++;
	}

	s[tot] = '\0';

	return (s);
}
