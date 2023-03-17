#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	while (A <= 'Z')
	{
		putchar(a);
		putchar(A);
		a++;
		A++;
	}

	putchar('\n');
	return (0);
}

