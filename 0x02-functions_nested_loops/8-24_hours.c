#include "main.h"
/**
  * jack_bauer - prints every minute of hours 0-23
  * Return: void
  */

void jack_bauer(void)
{

	int h, m; /* Vars for Counting */

	for (h = 0; h <= 23; h++)
	{

		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
