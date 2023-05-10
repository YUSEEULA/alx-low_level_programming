#include "main.h"

/**
 * create_file - function that create a file
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_open;
	int lenth = 0;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lenth])
			lenth++;
		if (write(f_open, text_content, lenth) != lenth)
		{
			close(f_open);
			return (-1);
		}
	}
	close(f_open);
	return (1);
}
