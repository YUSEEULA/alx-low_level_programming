#include "main.h"
/**
 * _sqrt - a function that calculates natural square
 * @n: number which to calcuate the square root
 * Return: the answer
 */
int _sqrt(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
		return (0);
}

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
