#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: argument1
 * @av: argument2
 * Return: return a pointer to a new string or NULL if
 * (ac == 0 or av == NULL or if it fails)
 */
char *argstostr(int ac, char **av)
{
	int a, b, len, index;
	char *res;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	len = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	index = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			res[index] = av[a][b];
			index++;
		}
		res[index] = '\n';
		index++;
	}
	return (res);
}
