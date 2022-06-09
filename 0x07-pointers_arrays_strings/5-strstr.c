#include "main.h"
#include <stddef.h>
/**
  * _strstr - return address of first val in ned, if all of ned is in hak
  * @hak: haystack, aka str 1 to check against
  * @ned: needle, aka str 2 to check if in str1
  * Return: address for hak, or NULL
  */

char *_strstr(char *hak, char *ned)
{
	int i, x;

	for (i = 0; hak[i] != '\0'; ++i)
	{
		
		if (hak[i] == ned[0])
		{
			x = 0;
			while (ned[x] != '\0')	
			{
				if (hak[i + x] != ned[x])
					break;
				else
					x++;
			}
			if (hak[i + x] == ned[x])
				return (&hak[i]);
		}
		
	}

	return ('\0');
}

