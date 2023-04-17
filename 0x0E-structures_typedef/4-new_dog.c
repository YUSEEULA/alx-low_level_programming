#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that create a new Dog
 * @name: the name of the new Dog
 * @age: the age of the new Dog
 * @owner: the owner of the new Dog
 *
 * Return: the answer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int a;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (a = 0; name[a]; a++)
	{
		new_dog->name[a] = name[a];
	}
	new_dog->name[a] = '\0';

	new_dog->age = age;

	for (a = 0; owner[a]; a++)
	{
		new_dog->owner[a] = owner[a];
	}
	new_dog->owner[a] = '\0';

	return (new_dog);
}
