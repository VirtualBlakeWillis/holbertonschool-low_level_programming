#include <stdio.h>

/**
  * main - print digits 0-9, followed by newline
  *
  * Return: return 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

