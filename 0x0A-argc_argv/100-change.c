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
	int cents;

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
}
