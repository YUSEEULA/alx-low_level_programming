#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string
 * @s: the string
 * Separators of words: space, tabulation
 * new line:, ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: the answer
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == s[i] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
