#include "dog.h"
/**
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *nameCpy, *ownerCpy;

	d = malloc(sizeof(*d));

	nameCpy = malloc(strlen(name) * sizeof(*nameCpy));
	ownerCpy = malloc(strlen(owner) * sizeof(*ownerCpy));

	if (nameCpy == NULL || ownerCpy == NULL)
		return (NULL);
	
	nameCpy = name;
	ownerCpy = owner;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
