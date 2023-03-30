#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *rot13 - function that encodes a string using rot13
 * @s: string to encode
 * Return: the answer
 */

char *rot13(char *str)
{
	char *result = malloc(strlen(str) + 1);
	int i, c;
	for (i = 0; str[i]; i++)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c = (c - 'a' + 13) % 26 + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = (c - 'A' + 13) % 26 + 'A';
		}
		result[i] = c;
	}
	result[i] = '\0';
	return (result);
}
