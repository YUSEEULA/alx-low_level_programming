#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * return : 0
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	while (a++ <= 9)
		for (b = 97; b < 123; b++)
		{
			_putchar(b);
			_putchar(10);
		}
}
