#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: variable1
 * @b: variable2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
