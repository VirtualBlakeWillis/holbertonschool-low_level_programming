#include "main.h"

/**
 * create_file - creates a file populated with text
 * @fn: file name
 * @text: text content for file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *fn, char *text)
{
	int fd, text_len;

	if (text == NULL)
		text = "";

	fd = open(fn, O_CREAT | O_RDWR, 0600);

	if (fd < 0)
		return (-1);

	text_len = strlen(text);
	if (write(fd, text, text_len) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
