#include "main.h"
#include <stdio.h>
/**
 * main - Entry point, print the number of arguments passed into the program
 * @argc: is a count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings
 * Return: return the answer
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
