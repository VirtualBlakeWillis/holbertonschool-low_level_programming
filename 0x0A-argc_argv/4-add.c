#include "main.h"

/**
  * main - add all numbers passed into function
  * @argc: # of input arguments
  * @argv: pointer array of input arguments
  * Return: 0 if function executes properly, 1 if a non-number is passed in
  */

int main(int argc, char *argv[])
{
	int tempInt = 0, sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			if (isNumber(&argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				tempInt = atoi(argv[i]);
				sum += tempInt;
			}
		}
	}

	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}

/**
  * isNumber - checks if input is a number
  * @input: input char
  * Return: 1 if letter, 0 if not
  */

int isNumber(char *input[])
{
	int x = *input[0];
	
	if ((x >= 48 && x <= 57))
		return (0);

	return (1);
}
