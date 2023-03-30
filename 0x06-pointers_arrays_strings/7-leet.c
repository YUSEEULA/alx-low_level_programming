#include "main.h"
#include <stdio.h>

/**
 * *leet - function that encodes a string into 1337.
 * @s: string
 *
 * Return: the answer
 */
char *leet(char *s)
{
	int a, b;
	char alpha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = "43071";

	for (a = 0; s[a] != '\0'; ++a)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (s[a] == alpha[b])
				s[a] = numbers[b / 2];
		}
	}
	return (s);
}
