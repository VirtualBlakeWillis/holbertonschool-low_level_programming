#include <stdio.h>

/**
  * main - print alphabet, exclude two characters
  *
  * Return: return 0
  */
int main(void)
{
	int i, x;

	for (i = 97; i < 123; i++)
	{
		x = i;
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}

