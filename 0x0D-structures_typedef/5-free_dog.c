#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
