#include "main.h"
/**
  * print_last_digit - modulo 10 the input, prints last digit
  *@x: input int
  *Return: output(z) last digit of input(x)
  */
int print_last_digit(int x)
{
	int z;

	z = x % 10;
	_putchar(z + '0');
	return (z);
}
