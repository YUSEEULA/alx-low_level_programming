#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 * n = numbers
 * Return : the answer
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			;
		else
			_putchar(n);
	}
	_putchar('\n');
}
