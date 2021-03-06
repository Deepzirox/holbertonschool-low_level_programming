#include <stdio.h>
#include <stdlib.h>
/**
 * len - get lenght of string
 * @str: string
 * Return: len of string
 */
int len(char *str)
{
	int counter = 0;

	while (str[counter])
		counter++;

	return (counter);
}
/**
 * string_nconcat - concatenate two strings
 * @s1: dest string
 * @s2: source string
 * @n: bytes to allocate
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 != NULL) ? len(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? len(s2) : 0;
	unsigned int z, x, v = 0;
	unsigned int memory;
	char *output;

	if (n >= len2)
		memory = len1 + len2;
	else
		memory = len1 + n;

	output = malloc((memory + 1) * sizeof(char));
	if (output == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < len1; x++)
		output[x] = s1[x];

	for (z = x; z < memory; z++, v++)
		output[z] = s2[v];

	output[memory] = '\0';

	return (output);
}
