#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: string to evaluate
 * Return: the answer
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
