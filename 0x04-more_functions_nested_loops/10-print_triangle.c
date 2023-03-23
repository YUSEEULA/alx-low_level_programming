#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 * Return: the answer
 */
void print_triangle(int size)
{
	int A, B, S;

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
			for (B = 1; B <= A; B++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
