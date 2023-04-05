#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int i = len - 1;

	if (i >= 0)
	{
		_putchar(s[i]);
		_print_rev_recursion(s - i);
	}
}
