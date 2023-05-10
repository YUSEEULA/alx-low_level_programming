#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename:  is the name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, lenth = 0;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_WRONLY | O_APPEND);
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
