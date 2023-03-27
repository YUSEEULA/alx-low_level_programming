#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: the string
 *
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int a;

	for (a = 0; a < len / 2; a++)
	{
		char c = s[a];

		s[a] = s[len - 1 - a];
		s[len - 1 - a] = c;
	}
}
