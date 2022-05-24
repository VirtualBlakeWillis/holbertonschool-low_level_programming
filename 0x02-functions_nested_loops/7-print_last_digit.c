#include "main.h"
/**
  * print_last_digit - modulo 10 the input, prints last digit
  *@x: input int
  *Return: output(z) last digit of input(x)
  */
int print_last_digit(int x)
{
	char z;
	z = (x % 10) + 48;
	_putchar(z);
	return (z);
}
