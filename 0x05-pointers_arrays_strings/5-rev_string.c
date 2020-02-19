#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char handler[1000];
	int c1, c2, lenght, point;

	lenght = 0;
	point = 0;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		handler[c1] = s[c1];
		lenght++;
	}
	for (point = lenght - 1; point >= 0; point--)
	{
		s[point] = handler[c2];
		c2++;
	}
}
