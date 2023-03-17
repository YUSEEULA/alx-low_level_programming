#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("%d Last digit of n and is greater than 5", n);
	else if (0 < n < 6)
	printf("%d Last digit of n and is less than 6 and not 0", n);
	else
	printf("%d Last digit of n and is zero", n);
	return (0);
}
