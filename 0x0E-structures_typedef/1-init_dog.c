#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init structure
 * @d: structure pointer
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
