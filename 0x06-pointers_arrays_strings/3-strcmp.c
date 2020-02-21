#include "holberton.h"
/**
 * _strcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: int (Always)
 */
int _strcmp(char *s1, char *s2)
{

	int df;

	while (s1[df] != '\0' s2[df] != '\0')
	{
		if (s1[df] != s2[df])
		{
			return ((int) s1[df] - s2[df]);
		}
		df++;
	}
	return (0);
}
