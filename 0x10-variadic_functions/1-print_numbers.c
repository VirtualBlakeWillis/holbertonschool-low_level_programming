#include "variadic_functions.h"

/**
  * print_numbers - print numbers, separated by separator
  * @separator: what to print in between numbers
  * @n: # of numbers
  * Return: to exit on fail
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d\n", va_arg(ap, int));

}
