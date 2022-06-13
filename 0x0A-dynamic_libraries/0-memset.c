/**
  * _memset - fills the first n bytes of the memory area s with a constant b
  * @s: pointer to memory area
  * @b: byte for input
  * @n: number of bytes of s to change into b
  * Return: pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
