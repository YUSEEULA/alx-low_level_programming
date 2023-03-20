#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int A;
	int B;
	int C;

	for (A = 0; A < 8; A++)
	{
		for (B = A + 1; B < 9; B++)
		{
			for (C = B + 1; C < 10; C++)
			{
				putchar(A + '0');
				putchar(B + '0');
				putchar(C + '0');
				if (A == 7 && B == 8 && C == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
