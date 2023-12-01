#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - main fun
 * @ac: the count of arguments
 * @av: the vector of args
 * Return: 1 or 
*/

int main(int ac, char **av)
{
	ssize_t b;
	int ffd, tfd;
	char buffer[BUFFER_SIZE];

	ffd = 0;

	tfd = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	ffd = open(av[1], O_RDONLY);
	if (ffd == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", av[1]), exit(98);
	}
	tfd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (tfd == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", av[2]), exit(99);
	}
	while ((b = read(ffd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(tfd, buffer, b) != b)
		{
			dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", av[1]), exit(98);
	}
	ffd = close(ffd);
	tfd = close(tfd);
	if (ffd)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %d\n", ffd), exit(100);
	}
	if (tfd)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %d\n", ffd), exit(100);
	}
	return (EXIT_SUCCESS);
}
