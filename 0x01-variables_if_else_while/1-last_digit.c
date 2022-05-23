#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
  * main - find last # of variable, print strings based on value of #
  *
  * Return: return 0
  */
int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	printf("Last digit of %d is %d and ", n,ln);
	if (ln > 5)
	{
		printf("is greater than 5\n");
	}
	if (ln == 0)
	{
		printf("is 0\n");
	}
	if (ln < 6 && ln != 0)
	{
		printf("is less than 6 and not 0\n");
	}

	return (0);
}
