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

	c2 = 0;
	lenght = 0;
	point = 0;

	while (s[c1] != '\0')
	{
		handler[c1] = s[c1];
		c1++;
		lenght++;
	}
	for (point = lenght - 1; point >= 0; point--)
	{
		s[point] = handler[c2];
		c2++;
	}
}
