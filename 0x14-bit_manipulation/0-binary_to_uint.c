#include "main.h"
#include "_pow.c"
/**
 * binary_to_uint - convert binary string to base 10 number
 * @b: input string of binary chars
 * Return: base 10 number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, i = 0, power, n;

	if (b == NULL)
		return (0);

	power = _pow(2, (strlen(b) - 1));

	while (i < strlen(b))
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n = (unsigned int)b[i] - '0';

		total += n * power;
		power /= 2;
		i++;
	}

	return (total);
}