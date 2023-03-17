#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main print last digit followed by greater than 5
 * or less than 6 and not 0 or is zero
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);
	if (lastDigit > 5)
	printf("%d greater than 5\n");
	else if (lastDigit == 0)
	printf("%d zero\n");
	else 
	printf("%d less than 6 and not 0\n");
	return (0);
}
