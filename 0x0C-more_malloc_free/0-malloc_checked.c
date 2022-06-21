#include "main.h"

/**
  *
  */

void *malloc_checked(unsigned int b)
{
	int *s;
	s = malloc(b);

	if (s == NULL)
		exit(98);
	else
		return (s);
}
