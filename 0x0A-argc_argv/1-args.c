#include "main.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
	if (argc > 0)	
		printf("%d\n", argc - 1);

	return(EXIT_SUCCESS);
}
