/**
  * _strncpy - exactly like strncpy
  * @n: Number of items to copy
  * @src: source to copy over
  * @dest: location to copy into
  * Return: void
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
