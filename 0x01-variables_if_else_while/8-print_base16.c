#include <stdio.h>

/**
  * main - print all characters of hexidecimal
  *
  * Return: return 0
  */
int main(void)
{
	int i;
	char x;

	for (i = 48; i < 58; i++)
	{
		x = i;
		putchar(x);
	}
	for (i = 97; i < 103; i++)
	{
		x = i;
		putchar(x);
	}
	putchar('\n');

	return (0);
}
