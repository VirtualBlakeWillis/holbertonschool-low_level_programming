#include <stdio.h>

/**
  * main - print alphabet, then newline char
  *
  * return: return 0
  */
int main(void)
{
	int i;
	char x;

	for (i = 97;i < 123; i++)
	{
		x = i;
		putchar(x);
	}
	putchar('\n');
	return (0);
}

