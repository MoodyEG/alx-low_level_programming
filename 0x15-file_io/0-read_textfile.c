#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: our file
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read and print, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	size_t i, len = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	i = read(fd, buff, letters);
	len = write(STDOUT_FILENO, buff, i);
	if (len < 1)
		return (0);
	close(fd);
	free(buff);

	return (len);
}
