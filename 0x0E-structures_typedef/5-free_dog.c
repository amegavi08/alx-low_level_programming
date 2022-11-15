#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees dogs.
* @d: struct dog.
*
* Return: no return.
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		freee(d->name);
		free(d->owner);
		free(d);
	}
}
