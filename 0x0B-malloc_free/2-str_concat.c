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
	char *res;
	int a, b;

	a = b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	res = malloc((a + b + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		res[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		res[a] = s2[b];
		a++, b++;
	}
	return (res);
}
