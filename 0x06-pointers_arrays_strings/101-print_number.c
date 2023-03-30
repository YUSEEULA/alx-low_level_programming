#include "main.h"

/**
 * print_number - function that print an integer
 * @n: integer
 * Return: the answer
 */

void print_number(int n)
{
	int digit;
	int sign = 1;

	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		digit = n % 10;
		_putchar('0' + digit);
		n /= 10;
	}
	if (sign == -1)
	{
		_putchar('-');
	}
}
