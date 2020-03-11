#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * allocate - alloc space in memory for char
 * @s: string
 * Return: pointer to address
 */
char *allocate(char *s)
{
	char *alloc;
	int it;

	if (s == 0)
		return (NULL);

	for (it = 0; s[it] != '\0'; it++)
	{
	}
	alloc = malloc(sizeof(char) * 1);
	if (alloc == NULL)
		return (NULL);

	for (it = 0; s[it] != '\0'; it++)
	{
		alloc[it] = s[it];
	}
	alloc[it] = '\0';
	return (alloc);
}
/**
 * new_dog - create new dog
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pet;

	new_pet = malloc(sizeof(dog_t));
	if (new_pet == 0)
		return (NULL);

	new_pet->name = allocate(name);
	new_pet->owner = allocate(owner);
	if (new_pet->name == 0 || new_pet->owner == 0)
	{
		free(new_pet->name);
		free(new_pet->owner);
		free(new_pet);
	}
	new_pet->age = age;
	return (new_pet);
}
