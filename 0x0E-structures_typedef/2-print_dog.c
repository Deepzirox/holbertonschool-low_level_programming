#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print firulais information
 * @d: structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			(*d).name = "(nil)";

		if (d->owner == NULL)
			(*d).owner = "(nil)";


		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf(" ");
	}
}
