#include <stdio.h>

/**
  * main - print this: "0, 1, 2, 3, 4, 5, 6, 7, 8, 9,", no char variable
  * 
  * Return: return 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(57);

	return (0);
}
