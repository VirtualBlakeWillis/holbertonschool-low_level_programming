#include "variadic_functions.h"

/**
  * print_all - prints anything you give it
  * @format: formatting map of itmes to print
  * Return:
  */

void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	char *seg = ", ", *tmpStr;

	va_start(ap, format);
	i = 0;


	while (format != NULL && format[i] != '\0')
	{
		if (format[i + 1] == '\0')
			seg = "";
		
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), seg);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), seg);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), seg);
				break;
			case 's':
				tmpStr = va_arg(ap, char*);
				if (tmpStr == NULL)
					tmpStr = "(nil)";
				printf("%s%s", tmpStr, seg);
				break;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
