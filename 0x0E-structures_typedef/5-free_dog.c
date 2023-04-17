#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 * @d: pointer to the struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
