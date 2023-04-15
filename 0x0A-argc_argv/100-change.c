#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: is a count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings
 * Return: return the answer
 */

int main(int argc, char *argv[])
{
	int cents, i, counter;
	int coins[] = {25, 10, 5, 2, 1};

	counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	return (0);

	for (i = 0; i < 5; i++)
	{
		counter += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", counter);
	return (0);
}
