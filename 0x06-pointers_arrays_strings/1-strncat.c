#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 * @dest: first digit
 * @src: econd digit
 * @n: number of bytes
 * Return: Return a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	dest[dest_len + a] = '\0';
	return (dest);
}
