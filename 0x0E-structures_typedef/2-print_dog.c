#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->age == 0 || d->owner == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
