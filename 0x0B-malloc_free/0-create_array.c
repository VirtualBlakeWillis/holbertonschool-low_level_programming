#include "main.h"
/**
  * create_array - creates an array of size, and fills with c
  * @size: size of array
  * @c: character to put in every memory space
  * Return: pointer to array, or NULL
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);

}

