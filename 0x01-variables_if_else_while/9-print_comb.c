#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int z = 0;

	while (z < 10)
	{
		putchar(z + '0');
		if (z < 9)
		{
			putchar(',');
			putchar(' ');
		}
		z++;
	}
	putchar('\n');
	return (0);
}
