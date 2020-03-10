#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog struct
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 * Return: *(struct) if success, NULL if Fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name == 0)
	{
		free(owner);
		free(new);
		return (NULL);
	}
	if (owner == 0)
	{
		free(name);
		free(new);
		return (NULL);
	}
	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;
	return (new);
}
