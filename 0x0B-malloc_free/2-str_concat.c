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
	char *concat;
	char *S;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat = (char *) malloc((len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	S = concat;
	while (*s1 != '\0')
	{
		*S++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*S++ = *s2++;
	}

	*S = '\0';

	return (concat);
}
