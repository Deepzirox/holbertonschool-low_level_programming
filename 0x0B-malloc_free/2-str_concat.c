#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * len - get lenght of string
 * @s1: string
 * Return: lenght of array
 */
int len(char *s1)
{
	int c1 = 0;

	while (s1[c1] != '\0')
		c1++;

	return (c1);
}
/**
 * str_concat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int memory, i2, i3, len1, len2;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = len(s1);
	len2 = len(s2);
	memory = len1 + len2;
	str = malloc((memory + 1) * sizeof(char));
	for (i2 = 0; i2 < len1; i2++)
		str[i2] = s1[i2];
	i2 = 0;
	for (i3 = len1; i3 < memory; i3++, i2++)
		str[i3] = s2[i2];

	str[memory] = '\0';
	return (str);
}
