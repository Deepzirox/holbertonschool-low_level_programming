#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int confirm;

	if (size <= 0)
		return (-1);
}
