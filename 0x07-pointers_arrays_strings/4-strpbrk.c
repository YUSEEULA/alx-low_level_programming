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
	char *p = accept;

	if (*s == *p)
	{
		return (s);
		p++;
	}
	s++;
	return (NULL);
}
