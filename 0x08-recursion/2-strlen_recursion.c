#include "main.h"

/**
 * _strlen_recursion - a function that returns the lengh of a string
 *
 * @s: string to be evalued
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
