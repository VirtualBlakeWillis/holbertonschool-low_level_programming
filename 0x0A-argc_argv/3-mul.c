#include "main.h"

/**
  * main - print the result of multplication for two input values
  * @argc: # of input arguments
  * @argv: pointer array of input arguments
  * Return: 0 if it works, 1 if not
  */

int main(int argc, char *argv[])
{
	int mult, first, second;

	if (argc > 2)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		mult = first * second;
		printf("%d\n", mult);
		return (EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
}
