#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: the string
 * Return: return NULL if str = NULL, On success,
 * the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i;
	char *duplicate = (char *) malloc((strlen(str) + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *) malloc((strlen(str) + 1));
	
	if (duplicate != NULL)
	{
		for (i = 0; str[i] != 0; i++)
		{
			str[i] = duplicate[i];
		}
	}
	return (duplicate);
}
