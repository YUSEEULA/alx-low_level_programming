#include "main.h"
/**
 * _sqrt - a function that calculates natural square
 * @n: number
 * Return: the answer
 */
int _sqrt(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (n);
	}
	else if (n == 1)
	{
		return (n);
	}
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number
 * Return: the natural aquare root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n));
}
