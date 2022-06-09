

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

char *_strstr(char *hay, char *ned)
{
	int i, x;

	for (i = 0; hay[i] != '\0'; i++)
	{
		if (hay[i] == *ned)
		{
			for (x = 0; ned[x] != '\0'; x++)
			{
				if (hay[i + x] != ned[x])
					break;
			}
		}
		if (hay[i + x] == ned[x])
			return (hay + i);
	}
	return ('\0');
}
