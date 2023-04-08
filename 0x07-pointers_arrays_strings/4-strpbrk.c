#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - function that searches a string
 * @s: string
 * @accept: string2
 * Return: return a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
