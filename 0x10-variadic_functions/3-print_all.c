#include "variadic_functions.h"

/**
  * print_all - prints anything you give it
  * @format: formatting map of itmes to print
  * Return:
  */

void print_all(const char * const format, ...)
{
	int i, last = strlen(format);
	va_list ap;
	char formList[] = {'c', 'i', 'f', 's'};
	va_start(ap, format);

	i = 0;
	while (i < last)
	{

		switch ((format + i))
		{
			case 'c':
				printf("%s, ", va_arg(ap, char *));
				break;
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ap, double));
				break;
			case 's':
				printf("%s, ", va_arg(ap, char*));
				break;

		}
		i++;
	}
}
