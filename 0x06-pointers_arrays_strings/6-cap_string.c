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
	int letter = 0;

	while (s[letter] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
		}
		if (s[letter] == ' ' || s[letter] == ',' || s[letter] == ';'
			|| s[letter] == '.' || s[letter] == '!' || s[letter] == '?'
			|| s[letter] == '"' || s[letter] == '(' || s[letter] == ')'
			|| s[letter] == '{' || s[letter] == '}' || s[letter] == '\t'
			|| s[letter] == '\n')
		{
			if (s[letter + 1] >= 97 && s[letter + 1] <= 122)
				s[letter + 1] -= 32;
		}
		letter++;
	}
	return (0);
}
