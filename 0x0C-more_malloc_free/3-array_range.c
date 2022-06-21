#include "main.h"

/**
  *
  */

int *array_range(int min, int max)
{
	
	int len = 0, i, *ptr;

	if (min > max)
		return (NULL);

	len = max - min;

	ptr = malloc((len + 1)  * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while ((min + i) <= max)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);

}
