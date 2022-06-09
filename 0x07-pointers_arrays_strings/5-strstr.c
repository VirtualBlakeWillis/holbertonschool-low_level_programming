

/**
  * _strstr - return address of first val in ned, if all of ned is in hak
  * @hak: haystack, aka str 1 to check against
  * @ned: needle, aka str 2 to check if in str1
  * Return: address for hak, or NULL
  */
#include <stddef.h>
/**
  *
  */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	int out = 0;
	int x;
	while (*haystack)
	{
		if (haystack[i] == needle[0])
		{
			for (x = 0; needle[x] != '\0'; x++)
			{
				if (haystack[i + x] != needle[x])
					break;
			}

			if (haystack[i + x] == needle[x])
			{
				break;
			}

		}
		if (out == 1)
			break;
		i++;
	}

	if (*haystack == '\0')
		return (NULL);
	else
		return (&haystack[i]);
}
