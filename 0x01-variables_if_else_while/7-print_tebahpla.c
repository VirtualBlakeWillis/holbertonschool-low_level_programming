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

	for (i = 122; i > 96; i--)
	{
		x = i;
		putchar(x);
	}
	putchar('\n');
	return (0);
}

