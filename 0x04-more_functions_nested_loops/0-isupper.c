#include "main.h"

/**
 * isupper - function that checks for uppercase character
 * @c: character to be verified
 * Description: Prints the alphabet with _putchar
 * Return: 1 if int c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
