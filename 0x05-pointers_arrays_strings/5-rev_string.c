#include "holberton.h"
/**
 * rev_string - reverse a string of char
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char rev[1000];
	int len, r, contr;

	while (s[len] != '\0')
	{
		len++;
	}
	len -= 1;
	for (r = len; r >= 0; r--)
	{
		rev[contr] = s[r];
		contr++;
	}
	for (int x = 0; x <= len; x++)
	{
		s[x] = rev[x];
	}
}
