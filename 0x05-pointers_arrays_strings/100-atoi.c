#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string
 * Return: the answer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s == '+')
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
