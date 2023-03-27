#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: the string
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
	int i;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
