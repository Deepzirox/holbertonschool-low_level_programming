#include "holberton.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int x, i = 0, l2 = 0;

	while(*needle)
	{

		for (x = 0; haystack[x] != '\0'; haystack++)
		{
			if ((*haystack == *needle))
			{	
				printf("%d : %d\n", i, l2);
				i++;
				
			}
		}
		l2++;
		needle++;
		if (i == l2)
			return haystack;
	}
	return 0;
}
