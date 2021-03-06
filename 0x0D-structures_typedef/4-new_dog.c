#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int i = 0, j = 0;
	int name_len = 0, own_len = 0;

	new_dog = malloc(sizeof(dog_t));
	if (!(new_dog))
		return (NULL);
	while (name[i])
		i++;
	name_len = i + 1;
	new_dog->name = malloc(sizeof(char) * name_len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	while (owner[j])
		j++;
	own_len = j + 1;
	new_dog->owner = malloc(sizeof(char) * own_len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < own_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
