#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a 'struct dog'
 * @d: pointer to struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age == '0')
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
