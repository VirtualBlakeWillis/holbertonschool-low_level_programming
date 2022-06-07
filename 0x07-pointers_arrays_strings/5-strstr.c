#include <stddef.h>
/**
  *
  */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	int out = 0;
	int x;
	char *startLoc;
	while (*haystack != '\0')
	{
		if (haystack[i] == needle[0])
		{
			startLoc = &haystack[i];

			for (x = 0; needle[x] != '\0'; x++)
			{
				if (haystack[i + x] != needle[x])
					break;
			}

			if (haystack[i + x] == needle[x])
			{
				out = 1;
				break;
			}
			startLoc = &haystack[0];
		}
		if (out == 1)
			break;
		i++;
	}

	if (*haystack == '\0')
		return (NULL);
	else
		return (startLoc);
}