#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of its
 * Return: the sum of all its parameters
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == '\0')
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
