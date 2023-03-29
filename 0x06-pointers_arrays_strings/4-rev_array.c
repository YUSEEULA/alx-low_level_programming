#include "main.h"

/**
 * reverse_array - function that reverses the content 
 * of an array of integers
 * @a: array
 * @n: integer
 * Return: the answer
 */

void reverse_array(int *a, int n)
{
	int temp, x = 0, y = n - 1;

	while (x < y)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
