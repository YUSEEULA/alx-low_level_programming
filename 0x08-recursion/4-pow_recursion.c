#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: variable1
 * @y: variable2
 * Return: the answer
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
