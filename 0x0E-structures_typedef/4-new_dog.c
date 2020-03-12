#include <stdio.h>
#include <stdlib.h>
#include "dog.h"




/**
 * allocate - alloc space in memory for char
 * @s: string
 * Return: pointer to address
 */

int len(char *s)
{
	int j;

	while (s[j] != '\0')
		j++;

	return (j);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pet;

	new_pet = malloc(sizeof(dog_t));
	if (new_pet == 0)
		return (0);

	new_pet->name = malloc((len(name) * sizeof(char)) + 1);
	(*new_pet).name = name;
	if (name == 0)
	{
		return (0);
	}
	new_pet->owner = malloc((len(owner) * sizeof(char)) + 1);
        (*new_pet).owner = owner;
        if (owner == 0)
        {
                return (0);
        }
	new_pet->age = age;
	return (new_pet);
}
