#include "main.h"
/**
  * _strdup - duplicate input to new string
  * @str: input string
  * Return: pointer to array, or NULL
  */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size])
		size++;


	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}

	return (s);

}

