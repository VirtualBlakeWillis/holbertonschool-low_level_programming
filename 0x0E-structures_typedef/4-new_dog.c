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

	if (d == NULL || nameCpy == NULL || ownerCpy == NULL)
		return (NULL);
	
	strcpy(nameCpy, name);
	strcpy(ownerCpy, owner);

	d->name = nameCpy;
	d->age = age;
	d->owner = ownerCpy;

	return (d);
}
