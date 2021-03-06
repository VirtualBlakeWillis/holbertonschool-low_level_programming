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

	if (sep == NULL)
		sep = "";

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	va_start(ap, n);

	for (i = 0; i < (int)(n - 1); i++)
	{
		myStr = va_arg(ap, char *);

		if (myStr == NULL)
			myStr = "(nil)";

		printf("%s%s", myStr, sep);
	}
	myStr = va_arg(ap, char *);
	if (myStr == NULL)
		myStr = "(nil)";
	printf("%s\n", myStr);
	va_end(ap);
}
