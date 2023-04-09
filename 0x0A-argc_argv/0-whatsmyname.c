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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d its name %s\n",i ,argv[i]);
	}
	return (0);
}
