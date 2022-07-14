#include "main.h"

/**
 * print_binary - convert base 10 input to binary
 * @n: base 10 number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary = n;

	if (n > 1)
		print_binary(n >> 1);

	_putchar((binary & 1) + '0');
}
