#include <stdio.h>
/**
  *
  */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned long diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	/* a[0,2] a[1,1] a[2,0] -> a + 2, a + 4, a + 8 */
	{
		diag2 += a[i];
		a -= size;
	}

	printf("%ld, %ld\n", diag1, diag2);
}
