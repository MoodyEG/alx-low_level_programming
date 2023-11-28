#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to create
 * @text_content:  a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	len = write(fd, text_content, i);
	if (len < 0)
		return (-1);
	close(fd);

	return (1);
}
