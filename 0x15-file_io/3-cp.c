#include "main.h"
/**
 * errchk - side func for error handling for betty
 * @fdin: checks for file intake
 * @fdot: checks for file outtake
 * @i: checks for intake file closure
 * @j: checks for outtake file closure
 * @argv: the arguments
 * Return: no return
 */
void errchk(int fdin, int fdot, ssize_t i, ssize_t j, char **argv)
{
	if (fdin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdot == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdin);
		exit(100);
	}
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdot);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fdin, fdot, i, j;
	ssize_t lenin = 1024, lenot = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdin = open(argv[1], O_RDONLY);
	fdot = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	errchk(fdin, fdot, 0, 0, argv);
	while (lenin == 1024)
	{
		lenin = read(fdin, buf, 1024);
		if (lenin == -1)
			errchk(-1, 0, 0, 0, argv);
		lenot = write(fdot, buf, lenin);
		if (lenot == -1)
			errchk(0, -1, 0, 0, argv);
	}
	i = close(fdin);
	j = close(fdot);
	errchk(fdin, fdot, i, j, argv);

	return (0);
}
