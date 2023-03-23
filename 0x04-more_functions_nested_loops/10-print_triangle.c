include "main.h"

/**
 * print_triangle - fuction that print a triangle
 * @size: size of the triangle
 * Return: the answer
 */

void print_triangle(int size)
{
	int A, H, S;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (A = 1; A <= size; A++)
		{
			for (S = size - A; S >= 1; S--)
			{
				_putchar(' ');
			}
			for (H = 1; H <= A; H++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
