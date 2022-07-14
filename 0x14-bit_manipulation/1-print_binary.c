#include "main.h"

/**
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary = n;

	if (n > 1)
		print_binary(n>>1);

	_putchar((binary & 1) + '0');
	return;
}
