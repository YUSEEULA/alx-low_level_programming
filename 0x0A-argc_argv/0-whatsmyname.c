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
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
