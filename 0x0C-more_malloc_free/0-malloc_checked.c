#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: int
 * Return: address to memory
 */
void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);
	if (address == NULL)
		exit(98);

	return (address);
}
