#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point, program that print the addition of positive numbers
 * @argc: is a count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings
 * Return: return the answer
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum;

	sum = 0;

	if (argc == 1 || argc < 1)
	{
		printf("0\n");
	}
	else 
	{
		for (num1 = 1; num1 < argc; num1++)
		{
			for (num2 = 0; argv[num1][num2] != '\0'; num2++)
			{
				if (!isdigit(argv[num1][num2]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		sum = sum + atoi(argv[num1]);
	}
	printf("%d\n", sum);
	return (0);
}
