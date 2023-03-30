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
		while (s[letter] >= 97 && s[letter] <= 122)
			letter++;
		if (s[letter] == ' ' || s[letter] == ',' || s[letter] == ';'
			|| s[letter] == '.' || s[letter] == '!' || s[letter] == '?'
			|| s[letter] == '"' || s[letter] == '(' || s[letter] == ')'
			|| s[letter] == '{' || s[letter] == '}' || s[letter] == '\t'
			|| s[letter] == '\n')
		{
			s[letter] -= 32;
		}
		letter++;
	}
	return (s);
}
