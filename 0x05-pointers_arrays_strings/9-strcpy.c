#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: the buffer pointed
 * @src: the string
 *
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int b;

	while (src[len] != '\0')
		len++;
	for (b = 0; b < len; b++)
		dest[b] = src[b];
	dest[b] = '\0';

	return (dest);
}
