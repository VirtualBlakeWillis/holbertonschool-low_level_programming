#include "holberton.h"
/**
  * _strcat - appends src to the dest string, returning pointer to new dest
  * @src: string to add to dest
  * @dest: string being added too
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}


/**
 * _strlen - gets legnth of string
 * @s: string to get legnth of
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
