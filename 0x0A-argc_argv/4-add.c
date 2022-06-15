#include "main.h"

/**
  * main - add all numbers passed into function
  * @argc: # of input arguments
  * @argv: pointer array of input arguments
  * Return: 0 if function executes properly, 1 if a non-number is passed in
  */

int main(int argc, char *argv[])
{
	int tempInt = 0, sum = 0, i, n;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			for (n = 0; argv[i][n]; ++n)
			{
				if (!isdigit(argv[i][n]))
				{
					printf("Error\n");
					return (1);
				}
			}
			tempInt = atoi(argv[i]);
			sum += tempInt;
		}
	}

	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
