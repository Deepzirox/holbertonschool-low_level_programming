#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b * sizeof(int));
	if (address == NULL)
		exit(98);

	return (address);
}
