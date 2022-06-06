#include "holberton.h"
/**
  *_strncat - appends n elements of src to the dest string
  * @src: source of string to add
  * @dest: string to add on to
  * @n: number of chars of src to add to dest
  * Return: void
  */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
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

