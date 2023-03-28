#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @*dest: the buffer pointed
 * @*src: the string
 *
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		 *dest++ = *src++;
	}
	*dest = '\0';

	return (dest_start);
}
