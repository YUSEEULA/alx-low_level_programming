#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: variable
 * Return: return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
