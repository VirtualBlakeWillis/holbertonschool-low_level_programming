#include "main.h"
#include <stddef.h>
/**
  *
  */

char *_strstr(char *hak, char *ned)
{
	unsigned int i = 0;
	int out = 0;
	int x;
	char *startLoc;

	while (hak[i] != '\0')
	{
		if (hak[i] == ned[0])
		{
			startLoc = &hak[i]; /* think about putting at end. val = hak[i - x] */

			for (x = 0; ned[x] != '\0'; x++)
			{
				if (hak[i + x] != ned[x])
					break;
			}
		 	
			if (hak[i + x] == ned[x])
				return (&hak[i - x]);
		}

		i++;
	}
	return (NULL);
}


/*		
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
*/	
