#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: the string number 1
 * @s2: the string number 2
 * Return: the answer
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 + len2;
	char *res;
	int a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	res = (char *) malloc((len + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		res[a] = s1[a];
	}
	for (b = 0; b < len2; b++)
	{
		res[a + b] = s2[b];
	}
	return (res);
}
