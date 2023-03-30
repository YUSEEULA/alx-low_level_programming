#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @s: string
 * Return: the answer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
