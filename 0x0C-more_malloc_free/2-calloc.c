#include "main.h"

/**
  * _calloc - 
  * @nmemb:
  * @size:
  * Return:
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (i < (int)nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
