#include "dog.h"

/**
  * free_dog - free memeory allocated for a dog structure
  * @d: dog to free
  * Return: if null
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
