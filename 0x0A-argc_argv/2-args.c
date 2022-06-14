#include "main.h"
#include <stdio.h>

/**
  * main - print values in argv[], each followed by a new line
  * @argc: # of input arguments
  * @argv: pointer array of input arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		for (int i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (EXIT_SUCCESS);
}
