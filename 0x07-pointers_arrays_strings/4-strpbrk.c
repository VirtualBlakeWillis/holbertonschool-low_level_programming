#include <stddef.h>
/**
  * _strpbrk - return pointer to first byte in s that is also a byte in accept
  * @s: main pointer/array
  * @accept: check against pointer/array
  * Return: pointer to s byte, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int i = 0;
	int out = 0;

	while (out == 0 && s[i] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				out = 1;
				break;
			}
		}
		if (out == 1)
			break;
		i++;
	}

	if (s[i] == '\0')
		return (NULL);
	else
		return (s + i);
}
