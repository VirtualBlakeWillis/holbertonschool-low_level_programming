#include "dog.h"
/**
  * new_dog - create a new dog
  * @name: input name
  * @age: age
  * @owner: dog owner
  * Return: struct pointer
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *nameCpy, *ownerCpy;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(*d));

	nameCpy = malloc(strlen(name) * sizeof(*nameCpy) + 1);
	ownerCpy = malloc(strlen(owner) * sizeof(*ownerCpy) + 1);

	if (d == NULL || nameCpy == NULL || ownerCpy == NULL)
	{
		free(nameCpy);
		free(ownerCpy);
		free(d);
		return (NULL);
	}
	strcpy(nameCpy, name);
	strcpy(ownerCpy, owner);

	if (nameCpy == NULL || ownerCpy == NULL)
		return (NULL);
	d->name = nameCpy;
	d->age = age;
	d->owner = ownerCpy;

	return (d);
}
