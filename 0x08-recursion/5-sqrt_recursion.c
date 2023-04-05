#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number
 * Return: the natural aquare root of a number
 */

int _sqrt_recursion(int n)
{
        return (_sqrt(n, 1));
}

/**
 * _sqrt - a function that calculates natural square
 * @n: number which to calcuate the square root
 * @i: number
 * Return: the answer
 */
int _sqrt(int n)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (i);
	}
	else
		return (_sqrt(n, i + 1);
}
