#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * allocate - alloc space in memory for char
 * @s: string
 * Return: pointer to address
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pet;

	new_pet = malloc(sizeof(dog_t));
	if (new_pet == 0)
		return (0);

	if ((name == 0 || owner == 0))
	{
		free(new_pet);
		return (NULL);
	}
	new_pet->owner = owner;
	new_pet->name = name;
	new_pet->age = age;
	return (new_pet);
}
