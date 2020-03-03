#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array in memory
 * @size: size of array
 * @c: char to buffer
 * Return: pointer to new
 */
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int x;

	tmp = malloc(size * sizeof(char));
	for (x = 0; x < size; x++)
		tmp[x] = c;


	return (tmp);
}