#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: value1
 * @accept: value2
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count;

	count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			if (accept[j + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
