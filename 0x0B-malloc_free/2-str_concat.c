#include "main.h"

/**
  * str_concat - allocate a new space in memory, holding the contents of s1+s2
  * @s1: input string 1
  * @s2: input string 2
  * Return: pointer to a new space in memory, or NULL
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, x = 0, z = 0, str_len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[x])
		x++;

	str_len = i + x + 1;

	p = malloc(str_len * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (z < i)
	{
		p[z] = s1[z];
		z++;
	}
	z = 0;

	while (z < x)
	{
		p[i + z] = s2[z];
		z++;
	}
	p[i + x] = '\0';

	return (p);

}
