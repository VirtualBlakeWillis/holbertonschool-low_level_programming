#include "main.h"

/**
 * read_textfile - read content of a file to standard output
 * @filename: name of file
 * @letters: num of letters to print
 * Return: # of letters printed, or 0 if func fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int c, fd, temp;
	char *buf;

	buf = malloc(c * sizeof(char));

	if (buf == NULL || filename == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	c = read(fd, buf, letters);
	if (c < 0)
	{
		free(buf);
		return (0);
	}
	temp = write(1, buf, c)
	if (temp < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (temp);
}
