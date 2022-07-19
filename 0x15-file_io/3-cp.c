#include "main.h"
#include "1-create_file.c"
#include ""
/**
 * main - handles logic of copy content of file 1 to file 2
 * @ac: # of args
 * @av: list of args
 * Return: 0
 */

int main(int ac, char **av)
{

	int file_from, file_to, temp;
	char *buff[1024];
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	
	file_from = open(av[1], 0_RDONLY);
	if (file_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n" av[1]);
		close(file_to);
		close(file_from);
		exit(98);
	}

        file_to = open(av[2], O_CREAT | O_TRUNC | 0664);
	temp = write(file_to);
	return (0);
}
