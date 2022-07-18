#include "main.h"

/**
 * append_text_to_file - append text to file that exits
 * @fn: file name
 * @text: text content for file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *fn, char *text)
{
	int fd, text_len;

	fd = open(fn, O_RDWR | O_APPEND);
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
