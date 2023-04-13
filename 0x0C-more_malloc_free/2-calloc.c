#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: element
 * @size: size of bytes
 * Return: return a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		pointer[a] = 0;
	return (pointer);
}
