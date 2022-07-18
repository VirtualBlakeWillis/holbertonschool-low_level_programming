#include "main.h"

/**
 * read_textfile - read content of a file to standard output
 * @fn: name of file
 * @letr: num of letters to print
 * Return: # of letters printed, or 0 if func fails
 */

ssize_t read_textfile(const char *fn, size_t letr)
{
	int fd, count;
	char *buff;

	if (fn == NULL)
		return (0);

	buff = malloc(letr * sizeof(char));
	fd = open(fn, O_RDONLY);

	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	if (fd < 0)
	{
		free(buff);
		return (0);
	}

	count = read(fd, buff, letr);
	if (count < 0)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	count = write(STDOUT_FILENO, buff, count);
	if (count < 0)
	{
		free(buff);
		close(fd);
	}

	close(fd);
	free(buff);
	return (count);
}
