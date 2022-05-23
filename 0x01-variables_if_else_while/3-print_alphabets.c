#include <stdio.h>

/**
  * main - print alphabet, then newline char
  *
  * Return: return 0
  */
int main(void)
{
	int i;
	char x;

	for (i = 97; i < 123; i++)
	{
		x = i;
		putchar(x);
	}
	for (i = 65; i < 91; i++)
	{
		x = i;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
