#include "main.h"

/**
 * read_textfile - read content of a file to standard output
 * @filename: name of file
 * @letters: num of letters to print
 * Return: # of letters printed, or 0 if func fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int c = letters, fd;
	char *buf;

	buf = malloc(letters * sizeof(char));

	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == 0)
		return (0);

	c = read(fd, buf, letters);
	if (write(1, buf, letters) == -1)
		return (0);

	close(fd);
	free(buf);
	return (c);
}
