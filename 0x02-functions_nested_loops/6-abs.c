#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer to be verified
 * Return : return 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
