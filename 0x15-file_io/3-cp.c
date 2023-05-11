#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int open_file(const char *filename, int mode);
void copy_file(int file_from, int file_to);
void close_file(int fDescriptor);
int main(int argc, char *argv[]);

/**
 * open_file - function that open a file
 * @filename: the name of the file
 * @mode: the mode to open the file
 * Return: the file descriptor in success
 */

int open_file(const char *filename, int mode)
{
	int file = open(filename, mode, 0644);

	if (file == -1)
	{
		if (mode == O_RDONLY)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s", filename);
			exit(98);
		}
		else
		{
			dprintf(STDERR_FILENO, "Can't write from file %s", filename);
			exit(99);
		}
	}
	return (file);
}

/**
 * copy_file - function that copies a file to another file
 * @file_from: the file to read from
 * @file_to: the file to write to
 *
 */

void copy_file(int file_from, int file_to)
{
	char buffer[1024];
	int nread = read(file_from, buffer, sizeof(buffer));

	while (nread > 0)
	{
		if (write(file_to, buffer, nread) != nread)
		{
		dprintf(STDERR_FILENO, "Can't write to file");
		exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Can't read to file");
		exit(98);
	}
	close(file_from);
	close(file_to);
}

/**
 * close_file - function that closes a file
 * @fDescriptor: the file to close
 */
void close_file(int fDescriptor)
{
	if (close(fDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d", fDescriptor);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open_file(argv[1], O_RDONLY);
	file_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC);

	copy_file(file_from, file_to);

	return (0);
}
