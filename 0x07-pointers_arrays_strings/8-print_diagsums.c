#include <stdio.h>
/**
  *
  */

void print_diagsums(int *a, int size)
{
	int i, x;
	unsigned long diag1 = 0, diag2 = 0;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		tmp = (i * 3) + i;
		diag1 += *(a + tmp);
	}

	for (x = 0; x < size; x++)
	{
		tmp = (x * 3) + i;
		diag2 += *(a + tmp);
			i--;
	}

	printf("%ld, %ld\n", diag1, diag2);
}
