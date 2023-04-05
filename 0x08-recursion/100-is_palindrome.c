#include "main.h"
#include <string.h>

int _strlen(char *s);

/**
 * _strlen - function that check the lenth of the string
 * @s: string
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * compare - function that check if the string is palindrome
 * @s: string
 * @i: index
 * @len: the lenth of the string
 * Return: palindrome or not
 */

int compare(int i, int len, char *s)
{
	if (len > 0)
	{
		if (s[i] != s[len])
			return (0);
		else if (s[i] == s[len])
			return (compare(i + 1, len - 1, s));
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - function that searchs palindrome
 * @s: string to be verified
 * Return: return 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (compare(0, _strlen(s) - 1, s));
}
