#include "main.h"
#include "_pow.c"
/**
 * binary_to_uint - convert binary string to base 10 number
 * @b: input string of binary chars
 * Return: base 10 number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	if (b[i] >= 2)
		return (0);

	return (val);
}
