#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int X;
	int Y;

	X = 48;
	while (X < 58)
	{
		Y = 48;
		while (Y < 58)
		{
			putchar(X);
			putchar(Y);
			Y++;
			putchar(',');
			putchar(' ');
		}
		X++;
	}
	putchar('\n');
	return (0);
}
