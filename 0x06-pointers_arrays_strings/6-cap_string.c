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
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	if (s[i] == ' ' || s[i] == ',' || s[i] == ';' ||
		s[i] == '.' || s[i] == '!' || s[i] == '?' ||
		s[i] == '"' || s[i] == '(' || s[i] == ')' ||
		s[i] == '{' || s[i] == '}' || s[i] == '\t' ||
		s[i] == '\n')
	{
		s[i] -= 32;
	}
		i++;
	}
	return (s);
}
