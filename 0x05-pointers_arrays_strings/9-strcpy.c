#include <stdio.h>
/**
  * _strcpy - copies the string pointed to by src
  * to the buffer pointed to by dest.
  * @dest: buffer
  * @src: pointer
  * Return: void
  */

char *_strcpy(char *dest, char *src)
{

	char *tmp = src;

	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (tmp);

}
