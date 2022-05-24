#include <stdio.h>
/**
`  * print_to_98 - print all real numbers between input and 98
  *@n: input
  *Return: void
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ",n);
			n++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ",n);
			n--;
		}
		printf("98/n");
	}
	else
		printf("%d\n",n);
}
