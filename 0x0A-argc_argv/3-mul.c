#include "main.h"
#include <stdio.h>

/**
 * main - Entry point , print name
 * @argc: is a count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings
 * Return: return the answer
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argc; j++)
		{
			if (argc != 2)
			{
				printf("Error");
				return (1);
			}
			else
			{
				result = i * j;
				printf("%d\n", result);
			}
		}
	}
	return (0);
}
