#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: the answer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int number;

	va_start(args, n);

	if (separator == NULL)
	{
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, const unsigned int);
		printf("%d", number);

		if (i < n  - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
