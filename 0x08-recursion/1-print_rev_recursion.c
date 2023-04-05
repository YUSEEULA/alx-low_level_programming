#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}
}
