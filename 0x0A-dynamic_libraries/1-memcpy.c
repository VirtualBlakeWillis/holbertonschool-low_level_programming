/**
  * _memcpy - copy n elements from src to dest
  * @dest: location to change
  * @src: new values (array)
  * @n: # of elements from src to put into dest
  * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
