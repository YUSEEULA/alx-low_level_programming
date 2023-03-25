#include <stdio.h>

/**
 * main - print the largest factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int div=2, a = 0, F;

	while(n!=0)
	{
		if(n % div !=0)
			div = div + 1;
		else
		{
			F = n;
			n = n / div;
			if(n == 1)
			{
				printf("%ld", F);
				a = 1;
				break;
			}
		}
	}
	return (0);
}
