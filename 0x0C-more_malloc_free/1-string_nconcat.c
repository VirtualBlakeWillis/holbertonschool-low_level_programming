#include "main.h"

/**
  * string_nconcat - concatonate n bytes of string2, onto string1
  * @s1: string 1
  * @s2: string 2
  * @n: n bytes
  * Return: pointer to new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1len, s2len, i;
	char *s;
	char *junk;

	junk = malloc(5);
	free(junk);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);

	if ((int) n <= s2len)
		s2len = n;

	s = malloc(s1len + s2len + 1);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < s1len)
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2len)
	{
		s[i + s1len] = s2[i];
		i++;
	}

	s[s1len + s2len] = '\0';

	return (s);


}
