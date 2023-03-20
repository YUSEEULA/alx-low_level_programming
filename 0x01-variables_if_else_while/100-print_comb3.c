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

	for (X = 0; X < 9; X++)
	{
		for (Y = X + 1; Y < 10; Y++)
		{
			putchar(X + '0');
			putchar(Y + '0');
			if (X == 8 && Y == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
