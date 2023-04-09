#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point , print name
 * @argc: is a count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings
 * Return: return the answer
 */

int main(int argc, char *argv[])
{
	int i, j;
	int mul;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	if (argc == 3)
	{
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
