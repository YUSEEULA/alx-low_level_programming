#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: the min value
 * @max: the max value
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (a = 0; a <= (max - min); a++)
		array[a] = min + a;

	return (array);
}
