#include "main.h"

/**
 * read_textfile - a function that reads a text file and print
 * it to the POSIX standard output.
 * @filename: file to be read
 * @letters: bytes to be read
 * Return: the nmber of read and printed bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char Buffer[BUFFER_SIZE * 8];
	int file;
	ssize_t b;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	file = open(filename, 0_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	b = read(file, &Buffer[0], letters);
	b = write(STDOUT_FILENO, &Buffer[0], b);
	close(file);
	return (b);
}
