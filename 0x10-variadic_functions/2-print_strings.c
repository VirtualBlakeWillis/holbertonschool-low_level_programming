#include "variadic_functions.h"

/**
  * print_strings - prints strings, separated by a separator, followed by \n
  * @sep: string to put in between strings
  * @n: number of strings inputted
  * Return: only to exit functions
  */

void print_strings(const char *sep, const unsigned int n, ...)
{
	int i;
	va_list ap;
	char *myStr;


	va_start(ap, n);

	for (i = 0; i < (int)(n - 1); i++)
	{
		myStr = va_arg(ap, char *);

		if (myStr == NULL)
			myStr = "(nil)";
		printf("%s%s", myStr, sep);
	}
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
