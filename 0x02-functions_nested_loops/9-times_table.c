#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0
 * a = row
 * b = column
 * r = result
 *
 * Return: times table
 */

void times_table(void)
{
	int a;
	int b;
	int r;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 0; b <= 9; b++)
		{
			r = (a * b);
			if ((r / 10) > 0)
				_putchar((r / 10) + '0');
			else
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}	
}
