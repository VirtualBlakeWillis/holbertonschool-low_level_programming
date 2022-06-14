#include "main.h"
#include <stdio.h>

/**
  * main - print # of input arguments (argc - 1)
  * @argc: # of input arguments
  * @argv: pointer array of input arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	if (argc > 0)	
		printf("%d\n", argc - 1);

	return(EXIT_SUCCESS);
}
