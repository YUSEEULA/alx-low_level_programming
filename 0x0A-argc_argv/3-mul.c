#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point , print the multiplication of two numbers
 * @argc: is a count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings
 * Return: return the answer
 */

int main(int argc, char *argv[])
{
	int i, j;
	int mul;
	char c[] = "Error";

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	if (argc == 3)
	{
		printf("%d\n", mul);
	}
	return (0);
}
