#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: amount of bytes
 * Return: return NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int a, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;
	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		result[a] = s1[a];
	for (a = 0; a < n; a++)

	result[len1 + n] = '\0';
	return (result);
}
