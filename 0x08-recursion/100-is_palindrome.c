#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that searchs palindrome
 * @s: string to be verified
 * Return: return 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] != s[len - 1])
	{
		return (0);
	}
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
