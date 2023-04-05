#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number
 * Return: the natural aquare root of a number
 */

int _sqrt_recursion(int n)
{
	int i;

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
	else
	{
		if (i > 0)
		{
			if (i * i == n)
			{
				return (i);
			}
			else
			{
				return (_sqrt_recursion(n, i + 1));
			}
		}
	}
}
