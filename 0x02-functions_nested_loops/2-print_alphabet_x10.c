#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * return : 0
 */

void print_alphabet_x10(void)
{
	int a = 'a';
	int x = 0;

	while (x++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			_putchar(10);
		}
	}
}
