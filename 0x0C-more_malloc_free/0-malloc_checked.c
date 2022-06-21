#include "main.h"

/**
  * malloc_checked - allocate memory, exit if fails
  * @b: number of bytes fo allocate
  * Return: void pointer
  */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
