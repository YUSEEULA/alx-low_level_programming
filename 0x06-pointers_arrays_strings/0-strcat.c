#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: first digit
 * @src: second digit
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*a != '\0')
		a++;
	while (*src != '\0')
		*a++ = *src++;
	*a = '\0';
	return (dest);
}
