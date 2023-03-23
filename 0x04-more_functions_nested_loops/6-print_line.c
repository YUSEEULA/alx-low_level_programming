#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * n = the number of times the character _ should be printed
 * b = the character
 * Return : the answer
 */

void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (b = 0; b < n; b++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
