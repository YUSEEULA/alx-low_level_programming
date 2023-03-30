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
	char c[] = {9, 10, 32, 33, 34, 40, 41, 44, 46 , 59, 63, 123, 125};

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == s[i] && (s[i + 1] >= 97 && s[i + 1] <= 122))
				j++;
		}
		i++;
	}
	return (s);
}
