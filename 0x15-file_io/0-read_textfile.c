#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters it could read and print
 * return 0 if:
 * the file can not be opened or read
 * filename is NULL
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_open;
	char *buffer;
	ssize_t f_read, f_write;

	if (filename == NULL)
		return (0);
	f_open = open(filename, O_RDONLY);
	if (f_open == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f_read = read(f_open, buffer, letters);
	if (f_read == -1)
	{
		free(buffer);
		close(f_open);
		return (0);
	}

	f_write = write(STDOUT_FILENO, buffer, f_read);
	if (f_write == -1)
	{
		free(buffer);
		close(f_open);
		return (0);
	}

	free(buffer);
	close(f_open);
	return (f_write);
}
