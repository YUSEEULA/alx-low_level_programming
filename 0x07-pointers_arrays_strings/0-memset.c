#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: value1
 * @b: value2
 * @n: value3
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
