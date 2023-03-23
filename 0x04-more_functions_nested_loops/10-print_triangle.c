#include "main.h"

/**
 * print_triangle -  function that prints a triangle
 * @size: the size of the triangle
 *
 * Return: the answer
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < x+1; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
