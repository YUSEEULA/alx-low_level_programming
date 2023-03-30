#include "main.h"

/**
 * print_number - function that print an integer
 * @n: integer
 * Return: the answer
 */

void print_number(int n)
{
	int num;

	num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 !=0)
	{
		print_number(num / 10)
	}
	_putchar((num % 10) + '0')
}
