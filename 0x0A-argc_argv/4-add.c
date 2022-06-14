#include "main.h"

/**
  * main - add all numbers passed into function
  * @argc: # of input arguments
  * @argv: pointer array of input arguments
  * Return: 0 if function executes properly, 1 if a non-number is passed in
  */

int main(int argc, char *argv[])
{
	int tempInt = 0, sum = 0;

	for (int i = 0; i < argc; i++)
	{
		if (isLetter(argv[i]))
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		else
		{
			tempInt = atoi(argv[i]);
			sum += tempInt;
		}
	}

	printf("%d\n", sum);
	return (EXIT_SUCCESS);
	
}

int isLetter(char *input)
{
	if ((*input >= 'a' && *input <= 'z') || (*input >= 'A' && *input <= 'Z'))
		return (1);

	return (0);
}
