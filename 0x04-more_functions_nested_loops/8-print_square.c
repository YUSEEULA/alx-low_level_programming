#include "main.h"

/**
 * print_square - function that print square
 *@size: size of square
 * Return: the answer
 */

void print_square(int size)
{
	int A, B;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (A = 1; A <= size; A++)
		{
			for (B = 1; B <= size; B++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
