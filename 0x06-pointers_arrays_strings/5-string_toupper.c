#include "holberton.h"
/**
 * string_toupper - converts string to upper
 * @str: string to convert
 * Return: converted string.
 */
char *string_toupper(char *str)
{
	int x, low;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			if (low == str[x])
			{
				str[x] = str[x] - 32;
			}
		}
	}
	return (str);
}
